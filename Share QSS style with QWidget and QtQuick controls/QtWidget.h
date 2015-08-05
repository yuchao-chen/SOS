#ifndef QQCS_QTWIDGET_H
#define QQCS_QTWIDGET_H

#include <QGroupBox>

class QtWidget : public QGroupBox
{
Q_OBJECT
public:
    explicit QtWidget       (QWidget * parent = nullptr);
    ~QtWidget               () override = default;
};

#endif//QQCS_QTWIDGET_H
