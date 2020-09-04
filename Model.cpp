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
    auto itr=strings.find(index.row()+index.column()*columns);
    if(role==Qt::DisplayRole && checkIndex(index))
    {
        if(itr!=strings.end())
            return itr->second.toDouble();
        else
            return QVariant("");
    }
    if(role==Qt::BackgroundRole && checkIndex(index))
    {
        if(itr!=strings.end())
            return QBrush(Qt::darkGray);
        else
            return QBrush(Qt::transparent);
    }

    return QVariant();
}

bool Model::setData(const QModelIndex &index, const QVariant &value, int role){
    if(role==Qt::EditRole)
    {
        if(value.toString()=="")
        {
            auto itr=strings.find(index.row()+index.column()*columns);
            if(itr!=strings.end())
                strings.erase(itr);
            cellContent[index.row()+index.column()*columns].toString()= nullptr;
            emit valueInserted(cellContent[index.row()+index.column()*columns].toDouble(),value.toString(),index.row(),index.column());
            return true;
        }

        else
        {
            auto itr=strings.find(index.row()+index.column()*columns);
            if(itr!=strings.end())
                itr->second=value.toDouble();
            else
                strings.insert(std::pair<int,QVariant>(index.row()+index.column()*columns,value.toDouble()));
            cellContent[index.row()+index.column()*columns]=value;
            emit valueInserted(cellContent[index.row()+index.column()*columns].toDouble(),value.toString(),index.row(),index.column());
            return true;
        }
    }
    return false;
}

Qt::ItemFlags Model::flags(const QModelIndex &index) const{
    return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}

void Model::cleanCell(const QModelIndex &index){
    auto itr=strings.find(index.row()+index.column()*columns);
    if(itr!=strings.end())
        strings.erase(itr);
}

QVariant Model::headerData(int section, Qt::Orientation orientation, int role) const{
    if (role == Qt::DisplayRole && orientation==Qt::Horizontal)
    {
        char *letters=new char[10];
        char letter='A';
        for(int i=0;i<10;i++)
        {
            letters[i]=letter;
            letter++;
        }
        return QString(letters[section]);
    }
    else if(role == Qt::DisplayRole && orientation==Qt::Vertical)
    {
        int *numbers=new int[10];
        for(int i=0;i<10;i++)
        {
            numbers[i]=i+1;
        }
        return QString(QString::number(numbers[section]));
    } else
        return QVariant();
}