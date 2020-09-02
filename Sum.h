//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H
#include <QPushButton>
#include <QVariant>
#include "ValuesManagement.h"

class Sum: public QPushButton{
    Q_OBJECT

public:
    explicit Sum(ValuesManagement* manager,QWidget* parent=nullptr);
    ~Sum(){};
    double getSum() const;
private:
    ValuesManagement* manager;
    QVariant sum;

public slots:
    void redoneSum(bool f);
signals:
    void updatedSum(QVariant &number);
};
#endif //SPREADSHEET_SUM_H
