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
    void redoneMin(bool f);
    double getMin() const;
private:
    ValuesManagement* manager;
    QVariant min;
signals:
    void updatedMin(QVariant &number);
};
#endif //SPREADSHEET_MIN_H
