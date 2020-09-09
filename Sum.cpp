//
// Created by lapo on 01/09/20.
//

#include "Sum.h"
Sum::Sum(Model* model,QWidget* parent):OperationButton(model,parent){
    this->model= model;
    this->setText("SUM");
    this->setGeometry(100,10,50,20);
}

void Sum::operation(bool f){
    if(model->cellContent.empty())
        result="";
    else
    {
        result=0.0;
        for(const auto& iterator:model->cellContent)
        {
            result=result.toDouble()+iterator.second.toDouble();
        }
    }
    emit updatedResult(result);
}
