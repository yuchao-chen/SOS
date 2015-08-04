#include "QtWidget.h"
#include <QComboBox>
#include <QVBoxLayout>

QtWidget::QtWidget (QWidget * parent) : QWidget (parent)
{
    QComboBox * comboColors = new QComboBox     (this);
    comboColors->addItems ({"Red", "Green", "Blue"});
    QVBoxLayout * layoutTop = new QVBoxLayout ();
    layoutTop->addWidget (comboColors);
    setLayout (layoutTop);
}
