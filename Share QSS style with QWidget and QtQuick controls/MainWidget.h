#ifndef QQCS_MAIN_WIDGET_H
#define QQCS_MAIN_WIDGET_H

#include <QWidget>

class MainWidget : public QWidget
{
Q_OBJECT
public:
    explicit MainWidget     (QWidget * parent = nullptr);
    ~MainWidget             () override = default;
};

#endif//QQCS_WIDGET_H
