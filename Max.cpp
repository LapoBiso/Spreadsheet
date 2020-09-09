//
// Created by lapo on 02/09/20.
//

#include "Max.h"
Max::Max(Model* model,QWidget* parent):OperationButton(model, parent){
    this->model=model;
    this->setText("MAX");
    this->setGeometry(300,10,50,20);
}

void Max::operation(bool f) {
    if(model->cellContent.empty())
        result="";
    else
    {
        result=model->cellContent.begin()->second;
        for(const auto& iterator:model->cellContent)
        {
            if(iterator.second>result.toDouble())
                result=iterator.second;
        }
    }
    emit updatedResult(result);
}
