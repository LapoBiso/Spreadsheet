//
// Created by lapo on 02/09/20.
//

#include "Mean.h"
Mean::Mean(Model* model,QWidget* parent):OperationButton(model, parent){
    this->setText("MEAN");
    this->setGeometry(200,10,50,20);
}

void Mean::operation(bool f) {
    if(model->cellContent.empty())
        result="";
    else
    {
        double sum=0.0;
        for(const auto& iterator:model->cellContent)
        {
            sum=sum+iterator.second.toDouble();
        }
        result=sum/model->cellContent.size();
    }
    emit updatedResult(result);
}
