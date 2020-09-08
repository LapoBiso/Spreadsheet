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
    double getMean() const;
public slots:
    void redoneMean(bool f);
private:
    ValuesManagement* manager;
    QVariant mean;
    signals:
    void updatedMean(QVariant &number);
};
#endif //SPREADSHEET_MEAN_H
