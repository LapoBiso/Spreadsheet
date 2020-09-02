//
// Created by lapo on 02/09/20.
//

#include "Min.h"

Min::Min(ValuesManagement *manager,QWidget* parent):QPushButton(parent){
    this->manager=manager;
}

void Min::redoneMin(bool f){
    if(manager->values.empty())
        min="";
    else
    {
        min=manager->values[0];
        for(auto iterator:manager->values)
        {
            if(iterator.second<min.toDouble())
                min=iterator.second;
        }
    }
    emit updatedMin(min);
}

double Min::getMin() const{
    return min.toDouble();
}