//
// Created by lapo on 02/09/20.
//

#ifndef SPREADSHEET_VALUESMANAGEMENT_H
#define SPREADSHEET_VALUESMANAGEMENT_H
#include <QObject>
#include <QString>
#include <map>


class ValuesManagement:public QObject{
    Q_OBJECT
public slots:
    void valuesUpdating(const double &value, const QString &string, const int &row, const int &column);
public:
    std::map<int, double> values;
};
#endif //SPREADSHEET_VALUESMANAGEMENT_H
