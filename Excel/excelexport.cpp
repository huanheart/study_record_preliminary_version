#include "excelexport.h"

ExcelExport::ExcelExport(QObject *parent)
    : QThread{parent}
{

}

void ExcelExport::SetGroupType(GroupingType Grouping_type)
{
    this->Grouping_type=Grouping_type;
}

void ExcelExport::SetFileName(QString FilaName)
{
    this->FileName=FilaName;
}

void ExcelExport::SetLabelHash(QHash<QString, QHash<QString, long long> > LabelHash)
{
    this->LabelHash=LabelHash;
    SetTimeHash();
}

void ExcelExport::SetTime(QDateTime FiveDaysDateString, QDateTime CurrentDateTimeString, bool AllExport)
{
    this->FiveDaysDateString=FiveDaysDateString;
    this->CurrentDateTimeString=CurrentDateTimeString;
    this->AllExport=AllExport;
}



void ExcelExport::run()
{
    exportToExcel();

}

void ExcelExport::exportToExcel()
{
    QFileInfo fileInfo(QDir::currentPath() + QDir::separator()+FileName);
    if(fileInfo.exists()&&fileInfo.isFile())
    {
        emit UnFinish();
        return ;
    }


    qDebug()<<"进入";
    QAxObject excel("Excel.Application");
    excel.setProperty("Visible", false);

    QAxObject *workbooks = excel.querySubObject("Workbooks"); //获取工作簿集合
    QAxObject *workbook = workbooks->querySubObject("Add()"); //增加一个新的工作簿

    QAxObject *sheets = workbook->querySubObject("Sheets"); //获取工作簿中的工作表集合
    QAxObject *sheet = sheets->querySubObject("Item(int)", 1); //获取工作表中的第一个工作表,我们选取第一个工作表

    // 设置表头
    if(!AllExport) //如果不是全部导出，那么要指明此时导出哪一个时间段的数据
    {

        headers[3]=FiveDaysDateString.toString("yyyy-MM-dd");
        headers[4]=CurrentDateTimeString.toString("yyyy-MM-dd");

    }
    int size=0;
    if(!AllExport) //片面
    {
        size=headers.size();
    }
    else
    {
        size=headers.size()-2;
    }
    for (int i = 0; i < size; ++i) {
        QAxObject *cell = sheet->querySubObject("Cells(int,int)", 1, i + 1); //com标准，获取第一行第i列的单元格
        cell->dynamicCall("SetValue(const QVariant&)", QVariant(headers[i])); //写入"标签名","对应日期","持续时长"
        delete cell;
    }


    // 设置数据
    if(Grouping_type==GroupingType::LabelGroup)
    {
        LabelGroup(sheet);
    }
    else
    {
        WeekGroup(sheet);
    }
    // 保存文件
    workbook->dynamicCall("SaveAs(const QString&)", QDir::currentPath() + QDir::separator()+FileName); //QDir::separator()这个是获取分隔符，比如windows的是\linux是/
    // 关闭Excel应用
    excel.dynamicCall("Quit()");
    delete sheet;
    delete sheets;
    delete workbook;
    delete workbooks;
    emit Finish();

}

void ExcelExport::LabelGroup(QAxObject *sheet)
{
    int row=0,col=0;
    for(auto it=LabelHash.begin();it!=LabelHash.end();it++)      //这个是全部的，以及不会分组的
    {
        for(auto subIt =it.value().begin();subIt!=it.value().end();++subIt)
        {
            if(AllExport||subIt.key()==FiveDaysDateString.toString("yyyy-MM-dd") ||subIt.key()==FiveDaysDateString.addDays(1).toString("yyyy-MM-dd")
                ||subIt.key()==FiveDaysDateString.addDays(2).toString("yyyy-MM-dd")||subIt.key()==FiveDaysDateString.addDays(3).toString("yyyy-MM-dd")
                ||subIt.key()==FiveDaysDateString.addDays(4).toString("yyyy-MM-dd")||subIt.key()==FiveDaysDateString.addDays(5).toString("yyyy-MM-dd"))
            { //如果是全部导出，或者在这个范围之内，那么就允许增加进去,针对的是不分组的
                QAxObject *cell1 = sheet->querySubObject("Cells(int,int)", row + 2, col + 1); //最开始从第二行写入
                cell1->dynamicCall("SetValue(const QVariant&)",it.key());

                QAxObject *cell2 = sheet->querySubObject("Cells(int,int)", row + 2, col + 2); //最开始从第二行写入
                cell2->dynamicCall("SetValue(const QVariant&)", subIt.key());

                QAxObject *cell3 = sheet->querySubObject("Cells(int,int)", row + 2, col + 3); //最开始从第二行写入
                cell3->dynamicCall("SetValue(const QVariant&)", Convert(subIt.value()) );
                ++row;
                delete cell1;
                delete cell2;
                delete cell3;
            }
        }
    }
}

void ExcelExport::WeekGroup(QAxObject *sheet)
{
    int row=0,col=0;
    for(auto it=TimeHash.begin();it!=TimeHash.end();it++)      //这个是全部的，以及不会分组的
    {
        for(auto subIt =it.value().begin();subIt!=it.value().end();++subIt)
        {
            if(AllExport||it.key()==FiveDaysDateString.toString("yyyy-MM-dd") ||it.key()==FiveDaysDateString.addDays(1).toString("yyyy-MM-dd")
                ||it.key()==FiveDaysDateString.addDays(2).toString("yyyy-MM-dd")||it.key()==FiveDaysDateString.addDays(3).toString("yyyy-MM-dd")
                ||it.key()==FiveDaysDateString.addDays(4).toString("yyyy-MM-dd")||it.key()==FiveDaysDateString.addDays(5).toString("yyyy-MM-dd"))
            { //如果是全部导出，或者在这个范围之内，那么就允许增加进去,针对的是不分组的
                QAxObject *cell2 = sheet->querySubObject("Cells(int,int)", row + 2, col + 1); //最开始从第二行写入
                cell2->dynamicCall("SetValue(const QVariant&)", subIt.key());

                QAxObject *cell1 = sheet->querySubObject("Cells(int,int)", row + 2, col + 2); //最开始从第二行写入
                cell1->dynamicCall("SetValue(const QVariant&)",it.key());

                QAxObject *cell3 = sheet->querySubObject("Cells(int,int)", row + 2, col + 3); //最开始从第二行写入
                cell3->dynamicCall("SetValue(const QVariant&)", Convert(subIt.value()) );
                ++row;
                delete cell1;
                delete cell2;
                delete cell3;
            }
        }
    }

}

void ExcelExport::SetTimeHash()
{
    //按照时间分类就需要花费2n2的时间了，要先给他初始化，再来才是遍历放入的
    for(auto it=LabelHash.begin();it!=LabelHash.end();it++)      //这个是全部的，以及不会分组的
    {
        for(auto subIt =it.value().begin();subIt!=it.value().end();++subIt)
        {
            TimeHash[subIt.key()][it.key()]=subIt.value();
            //这里也不一定要开一个TimeHash这个数据结构，可以在原有基础上，按照不同规则进行一个排序，而这个排序呢
            //针对时间，或者针对标签，即可，时间复杂度降低，空间复杂度也同理
        }
    }
}
