#include "MainWidget.h"
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QFormLayout>


MainWidget::MainWidget (QWidget * parent)
            : QWidget (parent)
{
    setWindowTitle (tr ("Qt StyleSheet issue") );

    QSpinBox * spinBox = new QSpinBox (this);
    QDoubleSpinBox * doubleSpinBox = new QDoubleSpinBox (this);
    QFormLayout * layoutTop   = new QFormLayout ();
    layoutTop->addRow (tr ("QSpinBox"), spinBox);
    layoutTop->addRow (tr ("QDoubleSpinBox"), doubleSpinBox);
    this->setLayout (layoutTop);
}
