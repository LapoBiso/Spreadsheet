//
// Created by lapo on 01/09/20.
//

#include "Window.h"
Window::Window(QWidget *parent):QMainWindow(parent){
    table= new QTableView(this);
    auto* manager=new ValuesManagement;
    sumButton=new Sum(manager,this);
    meanButton= new Mean(manager,this);
    maxButton= new Max(manager,this);
    minButton= new Min(manager,this);
    string=new Result(this);
    auto* model=new Model(this);
    table->setModel(model);
    this->setWindowTitle("Spreadsheet");
    this->setFixedSize(1200,600);
    table->setGeometry(100,50,1025,326);

    QObject::connect(table,&QTableView::doubleClicked,model,&Model::cleanCell);
    QObject::connect(model,&Model::valueInserted,manager,&ValuesManagement::valuesUpdating);
    QObject::connect(sumButton,&Sum::clicked,sumButton,&Sum::redoneSum);
    QObject::connect(sumButton,&Sum::updatedSum,string,&Result::setNumber);
    QObject::connect(meanButton,&Mean::clicked,meanButton,&Mean::redoneMean);
    QObject::connect(meanButton,&Mean::updatedMean,string,&Result::setNumber);
    QObject::connect(maxButton,&Max::clicked,maxButton,&Max::redoneMax);
    QObject::connect(maxButton,&Max::updatedMax,string,&Result::setNumber);
    QObject::connect(minButton,&Min::clicked,minButton,&Min::redoneMin);
    QObject::connect(minButton,&Min::updatedMin,string,&Result::setNumber);
}