//
// Created by lapo on 01/09/20.
//

#include "Result.h"
Result::Result(QWidget *parent):QLineEdit(parent) {
    this->setText("RESULT: ");
    this->setReadOnly(true);
    this->setGeometry(100,400,200,20);

}


void Result::setNumber(QVariant &number){
    if(number.toString()=="")
        this->setText("Cells are empty ");
    else
    {
        QString string;
        string=QString::number(number.toDouble());
        this->setText("RESULT: "+string);
    }
}