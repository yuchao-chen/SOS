#ifndef QSSI_MAIN_WIDGET_H
#define QSSI_MAIN_WIDGET_H

#include <QWidget>

class MainWidget : public QWidget
{
Q_OBJECT
public:
    explicit MainWidget     (QWidget * parent = nullptr);
    ~MainWidget             () override = default;
};

#endif//QSSI_WIDGET_H
