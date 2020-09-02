//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MAX_H
#define SPREADSHEET_MAX_H
#include <QPushButton>
#include <QVariant>
#include "ValuesManagement.h"
class Max: public QPushButton{
    Q_OBJECT
public:
    explicit Max(ValuesManagement *manager,QWidget* parent=nullptr);
    ~Max(){};
    void redoneMax(bool f);
    double getMax() const;
private:
    ValuesManagement* manager;
    QVariant max;
    signals:
    void updatedMax(QVariant &number);
};
#endif //SPREADSHEET_MAX_H
