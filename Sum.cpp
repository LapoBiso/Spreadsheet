//
// Created by lapo on 01/09/20.
//

#include "Sum.h"
#include <utility>
Sum::Sum(ValuesManagement* manager,QWidget* parent):QPushButton(parent){
    this->manager= manager;
}

void Sum::redoneSum(bool f){
    if(manager->values.empty())
        sum="";
    else
    {
        sum=0.0;
        for(auto iterator:manager->values)
        {
            sum=sum.toDouble()+iterator.second;
        }
    }
    emit updatedSum(sum);
}

double Sum::getSum() const {
    return sum.toDouble();
}
