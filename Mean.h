//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MEAN_H
#define SPREADSHEET_MEAN_H
#include <QPushButton>
#include <QVariant>
#include "ValuesManagement.h"
class Mean: public QPushButton{
    Q_OBJECT
public:
    explicit Mean(ValuesManagement *manager,QWidget* parent=nullptr);
    ~Mean(){};
    void redoneMean(bool f);
    double getMean() const;
private:
    ValuesManagement* manager;
    QVariant mean;
    signals:
    void updatedMean(QVariant &number);
};
#endif //SPREADSHEET_MEAN_H
