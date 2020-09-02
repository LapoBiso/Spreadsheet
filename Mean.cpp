//
// Created by lapo on 02/09/20.
//

#include "Mean.h"
Mean::Mean(ValuesManagement *manager,QWidget* parent):QPushButton(parent){
   this->manager=manager;
}

void Mean::redoneMean(bool f){
    if(manager->values.empty())
        mean="";
    else
    {
        double sum=0.0;
        for(auto iterator:manager->values)
        {
            sum=sum+iterator.second;
        }
        mean=sum/manager->values.size();
    }
    emit updatedMean(mean);
}

double Mean::getMean() const{
    return mean.toDouble();
}