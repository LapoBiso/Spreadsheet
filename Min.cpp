//
// Created by lapo on 02/09/20.
//

#include "Min.h"

Min::Min(ValuesManagement *manager,QWidget* parent):OperationButton(parent){
    this->manager=manager;
    this->setText("MIN");
    this->setGeometry(400,10,50,20);
}

void Min::operation(bool f){
    if(manager->values.empty())
        result="";
    else
    {
        result=manager->values.begin()->second;
        for(auto iterator:manager->values)
        {
            if(iterator.second<result.toDouble())
                result=iterator.second;
        }
    }
    emit updatedResult(result);
}