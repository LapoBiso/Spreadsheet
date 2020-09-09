//
// Created by lapo on 01/09/20.
//

#include "Sum.h"
Sum::Sum(ValuesManagement* manager,QWidget* parent):OperationButton(parent){
    this->manager= manager;
    this->setText("SUM");
    this->setGeometry(100,10,50,20);
}

void Sum::operation(bool f){
    if(manager->values.empty())
        result="";
    else
    {
        result=0.0;
        for(auto iterator:manager->values)
        {
            result=result.toDouble()+iterator.second;
        }
    }
    emit updatedResult(result);
}
