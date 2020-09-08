//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H
#include <QPushButton>
#include <QVariant>
#include "ValuesManagement.h"
class Min: public QPushButton{
Q_OBJECT
public:
    explicit Min(ValuesManagement *manager,QWidget* parent=nullptr);
    ~Min(){};
    double getMin() const;
public slots:
    void redoneMin(bool f);
private:
    ValuesManagement* manager;
    QVariant min;
signals:
    void updatedMin(QVariant &number);
};
#endif //SPREADSHEET_MIN_H
