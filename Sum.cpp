//
// Created by lapo on 01/09/20.
//

#include "Sum.h"
Sum::Sum(QWidget* parent): QPushButton(parent){}

void Sum::updating(const double &value, const QString &string, const int &row, const int &column) {
    auto iter=values.find(row+column*10);
    if(string=="")
    {
        if(iter!=values.end())
        {
            values.erase(iter);
        }
    }
    else
    {
        if(iter==values.end())
            values.insert(std::pair<int,int>(row+column*10,value));
        else
            iter->second=value;
    }
    if(values.empty())
        sum="";
    else
    {
        sum=0;
        for(auto iterator:values)
        {
            sum=sum.toDouble()+iterator.second;
        }
    }
}

void Sum::redoneSum(bool f){
    emit updated(sum);
}
