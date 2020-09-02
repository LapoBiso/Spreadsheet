//
// Created by lapo on 02/09/20.
//

#include "ValuesManagement.h"
void ValuesManagement::valuesUpdating(const double &value, const QString &string, const int &row, const int &column){
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
            values.insert(std::pair<int,double>(row+column*10,value));
        else
            iter->second=value;
    }
}