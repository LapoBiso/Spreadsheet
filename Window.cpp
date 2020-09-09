//
// Created by lapo on 01/09/20.
//

#include "Window.h"
Window::Window(QWidget *parent):QMainWindow(parent){
    table= std::unique_ptr<QTableView> (new QTableView(this));
    auto* manager=new ValuesManagement;
    sumButton= std::unique_ptr<Sum>(new Sum(manager,this));
    meanButton= std::unique_ptr<Mean>(new Mean(manager,this));
    maxButton= std::unique_ptr<Max>(new Max(manager,this));
    minButton= std::unique_ptr<Min>(new Min(manager,this));
    string= std::unique_ptr<Result>(new Result(this));
    auto* model=new Model(this);
    table->setModel(model);
    this->setWindowTitle("Spreadsheet");
    this->setFixedSize(1200,600);
    table->setGeometry(100,50,1025,326);
    QObject::connect(table.get(),&QTableView::doubleClicked,model,&Model::cleanCell);
    QObject::connect(model,&Model::valueInserted,manager,&ValuesManagement::valuesUpdating);
    QObject::connect(sumButton.get(),&Sum::clicked,sumButton.get(),&Sum::redoneSum);
    QObject::connect(sumButton.get(),&Sum::updatedSum,string.get(),&Result::setNumber);
    QObject::connect(meanButton.get(),&Mean::clicked,meanButton.get(),&Mean::redoneMean);
    QObject::connect(meanButton.get(),&Mean::updatedMean,string.get(),&Result::setNumber);
    QObject::connect(maxButton.get(),&Max::clicked,maxButton.get(),&Max::redoneMax);
    QObject::connect(maxButton.get(),&Max::updatedMax,string.get(),&Result::setNumber);
    QObject::connect(minButton.get(),&Min::clicked,minButton.get(),&Min::redoneMin);
    QObject::connect(minButton.get(),&Min::updatedMin,string.get(),&Result::setNumber);
}