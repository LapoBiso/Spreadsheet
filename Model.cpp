//
// Created by lapo on 01/09/20.
//

#include "Model.h"

Model::Model(QObject* parent):QAbstractTableModel(parent){}

int Model::rowCount(const QModelIndex &parent) const{
    return rows;
}

int Model::columnCount(const QModelIndex &parent) const{
    return columns;
}

QVariant Model::data(const QModelIndex &index, int role) const{
    if(role==Qt::DisplayRole && checkIndex(index))
        return cellContent[index.row()][index.column()];
    return QVariant();
}

bool Model::setData(const QModelIndex &index, const QVariant &value, int role){
    if(role==Qt::EditRole)
    {
        if(value.toString()=="")
        {
            cellContent[index.row()][index.column()].toString()= nullptr;
            emit valueInserted(cellContent[index.row()][index.column()].toDouble(),value.toString(),index.row(),index.column());
            return true;
        }

        else
        {
            cellContent[index.row()][index.column()]=value;
            emit valueInserted(cellContent[index.row()][index.column()].toDouble(),value.toString(),index.row(),index.column());
            return true;
        }
    }
    return false;
}

Qt::ItemFlags Model::flags(const QModelIndex &index) const{
    return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}
