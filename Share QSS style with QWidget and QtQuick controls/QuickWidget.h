#ifndef QQCS_QUICKWIDGET_H
#define QQCS_QUICKWIDGET_H

#include <QGroupBox>

class QuickWidget : public QGroupBox
{
Q_OBJECT
public:
    QuickWidget             (QWidget * parent = nullptr);
    ~QuickWidget            () override = default;
};

#endif//QQCS_QUICKWIDGET_H
