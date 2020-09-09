//
// Created by lapo on 09/09/20.
//

#include "OperationButton.h"

OperationButton::OperationButton(QWidget* parent):QPushButton(parent){}

double OperationButton::getResult() const {
    return result.toDouble();
}