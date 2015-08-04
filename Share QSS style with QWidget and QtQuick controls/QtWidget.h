#ifndef QQCS_QTWIDGET_H
#define QQCS_QTWIDGET_H

#include <QWidget>

class QtWidget : public QWidget
{
Q_OBJECT
public:
    explicit QtWidget       (QWidget * parent = nullptr);
    ~QtWidget               () override = default;
};

#endif//QQCS_QTWIDGET_H
