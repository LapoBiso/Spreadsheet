//
// Created by lapo on 09/09/20.
//

#include "OperationButton.h"

OperationButton::OperationButton(Model* model, QWidget* parent):QPushButton(parent){
    this->model=model;
}

double OperationButton::getResult() const {
    return result.toDouble();
}