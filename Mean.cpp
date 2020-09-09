//
// Created by lapo on 02/09/20.
//

#include "Mean.h"
Mean::Mean(ValuesManagement *manager,QWidget* parent):OperationButton(parent){
   this->manager=manager;
    this->setText("MEAN");
    this->setGeometry(200,10,50,20);
}

void Mean::operation(bool f) {
    if(manager->values.empty())
        result="";
    else
    {
        double sum=0.0;
        for(auto iterator:manager->values)
        {
            sum=sum+iterator.second;
        }
        result=sum/manager->values.size();
    }
    emit updatedResult(result);
}
