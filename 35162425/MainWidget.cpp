#include "MainWidget.h"
#include <QSpinBox>
#include <QFormLayout>


MainWidget::MainWidget (QWidget * parent)
            : QWidget (parent)
{
    setWindowTitle (tr ("Qt StyleSheet issue") );

    QSpinBox * spinFirst  = new QSpinBox (this);
    QSpinBox * spinSecond = new QSpinBox (this);
    QFormLayout * layoutTop   = new QFormLayout ();
    layoutTop->addRow (tr ("First"),  spinFirst);
    layoutTop->addRow (tr ("Second"), spinSecond);
    this->setLayout (layoutTop);
}
