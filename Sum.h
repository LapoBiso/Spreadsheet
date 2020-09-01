//
// Created by lapo on 01/09/20.
//

#ifndef SPREADSHEET_SUM_H
#define SPREADSHEET_SUM_H
#include <QPushButton>
#include <QVariant>

class Sum: public QPushButton{
    Q_OBJECT

public:
    explicit Sum(QWidget* parent=nullptr);
    ~Sum(){};
    const double getSum() const;
private:
    std::map<int, double> values;
    QVariant sum;
public slots:
    void updating(const double &value, const QString &string, const int &row, const int &column);
    void redoneSum(bool f);
signals:
    void updated(QVariant &number);
};
#endif //SPREADSHEET_SUM_H
