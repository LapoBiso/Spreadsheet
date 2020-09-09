//
// Created by lapo on 02/09/20.
//

#include "Min.h"

Min::Min(Model* model,QWidget* parent):OperationButton(model,parent){
    this->model=model;
    this->setText("MIN");
    this->setGeometry(460,10,100,20);
}

void Min::operation(bool f){
    if(model->cellContent.empty())
        result="";
    else
    {
        result=model->cellContent.begin()->second;
        for(const auto& iterator:model->cellContent)
        {
            if(iterator.second<result.toDouble())
                result=iterator.second;
        }
    }
    emit updatedResult(result);
}

void Min::resetText(){
    this->setText("MIN");
}