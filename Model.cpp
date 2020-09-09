//
// Created by lapo on 01/09/20.
//

#include "Model.h"
#include "OperationButton.h"
Model::Model(QObject* parent):QAbstractTableModel(parent){
    button=nullptr;
}

int Model::rowCount(const QModelIndex &parent) const{
    return rows;
}

int Model::columnCount(const QModelIndex &parent) const{
    return columns;
}

QVariant Model::data(const QModelIndex &index, int role) const{
    auto itr=cellContent.find(index.row()+index.column()*columns);
    if(role==Qt::DisplayRole && checkIndex(index))
    {
        if(itr!=cellContent.end())
            return itr->second.toDouble();
        else
            return QVariant("");
    }
    if(role==Qt::BackgroundRole && checkIndex(index))
    {
        if(itr!=cellContent.end())
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
            auto itr=cellContent.find(index.row()+index.column()*columns);
            if(itr!=cellContent.end())
            {
                cellContent.erase(itr);
            }
            if(button!=nullptr)
                button->operation(true);
            return true;
        }

        else
        {
            auto itr=cellContent.find(index.row()+index.column()*columns);
            if(itr!=cellContent.end())
                itr->second=value.toDouble();
            else
                cellContent.insert(std::pair<int,QVariant>(index.row()+index.column()*columns,value.toDouble()));
            if(button!= nullptr)
                button->operation(true);
            return true;
        }
    }
    return false;
}

Qt::ItemFlags Model::flags(const QModelIndex &index) const{
    return Qt::ItemIsEditable | QAbstractTableModel::flags(index);
}

void Model::cleanCell(const QModelIndex &index){
    auto itr=cellContent.find(index.row()+index.column()*columns);
    if(itr!=cellContent.end())
        cellContent.erase(itr);
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

void Model::setButton(OperationButton* b) {
    this->button=b;
}