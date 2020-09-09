//
// Created by lapo on 01/09/20.
//

#include "Window.h"
Window::Window(QWidget *parent):QMainWindow(parent){
    auto* model=new Model(this);
    table= std::unique_ptr<QTableView> (new QTableView(this));
    sumButton= std::unique_ptr<Sum>(new Sum(model,this));
    meanButton= std::unique_ptr<Mean>(new Mean(model,this));
    maxButton= std::unique_ptr<Max>(new Max(model,this));
    minButton= std::unique_ptr<Min>(new Min(model,this));
    string= std::unique_ptr<Result>(new Result(this));
    table->setModel(model);
    this->setWindowTitle("Spreadsheet");
    this->setFixedSize(1200,600);
    table->setGeometry(100,50,1025,326);
    QObject::connect(table.get(),&QTableView::doubleClicked,model,&Model::cleanCell);
    QObject::connect(sumButton.get(),&OperationButton::clicked,sumButton.get(),&OperationButton::operation);
    QObject::connect(sumButton.get(),&OperationButton::updatedResult,string.get(),&Result::setNumber);
    QObject::connect(meanButton.get(),&OperationButton::clicked,meanButton.get(),&OperationButton::operation);
    QObject::connect(meanButton.get(),&OperationButton::updatedResult,string.get(),&Result::setNumber);
    QObject::connect(maxButton.get(),&OperationButton::clicked,maxButton.get(),&OperationButton::operation);
    QObject::connect(maxButton.get(),&OperationButton::updatedResult,string.get(),&Result::setNumber);
    QObject::connect(minButton.get(),&OperationButton::clicked,minButton.get(),&OperationButton::operation);
    QObject::connect(minButton.get(),&OperationButton::updatedResult,string.get(),&Result::setNumber);
}

