//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_RESULT_H
#define SPREADSHEET_RESULT_H
#include <QLineEdit>
class Result: public QLineEdit{
    Q_OBJECT
public:
    Result(QWidget* parent=nullptr);
    ~Result(){};

public slots:
    void setNumber(QVariant &number);
};
#endif //SPREADSHEET_RESULT_H
