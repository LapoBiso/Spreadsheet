//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H
#include "OperationButton.h"
#include <QVariant>
#include "ValuesManagement.h"
class Min: public OperationButton{
Q_OBJECT
public:
    explicit Min(ValuesManagement *manager,QWidget* parent=nullptr);
    ~Min(){};
public slots:
    void operation(bool f);
private:
    ValuesManagement* manager;
};
#endif //SPREADSHEET_MIN_H
