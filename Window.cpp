//
// Created by lapo on 01/09/20.
//

#include "Window.h"
Window::Window(QWidget *parent):QMainWindow(parent){
    table= new QTableView(this);
    sumButton=new Sum(this);
    string=new Result(this);
    auto* model=new Model(this);
    table->setModel(model);
    this->setWindowTitle("Spreadsheet");
    sumButton->setText("SUM");
    this->setFixedSize(1200,600);
    sumButton->setGeometry(100,10,50,20);
    string->setGeometry(100,400,100,20);
    table->setGeometry(100,50,1025,326);
    for(int i=0;i<10;i++)
    {
        for(int j=0; j<10; j++)
        {
            model->cellContent[i][j]=" ";
        }
    }
    QObject::connect(table,&QTableView::doubleClicked,model,&Model::cleanCell);
    QObject::connect(model,&Model::valueInserted,sumButton,&Sum::updating);
    QObject::connect(sumButton,&Sum::clicked,sumButton,&Sum::redoneSum);
    QObject::connect(sumButton,&Sum::updated,string,&Result::setNumber);
}