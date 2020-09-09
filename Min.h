//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_MIN_H
#define SPREADSHEET_MIN_H
#include "OperationButton.h"
#include <QVariant>
class Min: public OperationButton{
Q_OBJECT
public:
    explicit Min(Model* model ,QWidget* parent=nullptr);
    ~Min(){};
public slots:
    void operation(bool f);
};
#endif //SPREADSHEET_MIN_H
