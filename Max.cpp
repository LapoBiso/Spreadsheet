//
// Created by lapo on 02/09/20.
//

#include "Max.h"
Max::Max(ValuesManagement *manager,QWidget* parent):QPushButton(parent){
    this->manager=manager;
}

void Max::redoneMax(bool f){
    if(manager->values.empty())
        max="";
    else
    {
        max=manager->values.begin()->second;
        for(auto iterator:manager->values)
        {
            if(iterator.second>max.toDouble())
                max=iterator.second;
        }
    }
    emit updatedMax(max);
}

double Max::getMax() const{
    return max.toDouble();
}