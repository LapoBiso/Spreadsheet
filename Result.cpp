//
// Created by lapo on 01/09/20.
//

#include "Result.h"
Result::Result(QWidget *parent):QLineEdit(parent) {
    this->setText("RESULT: ");
    this->setReadOnly(true);
}


void Result::setNumber(QVariant &number){
    QString string;
    string=number.toString();
    this->setText("RESULT: "+string);
}