#include "QtWidget.h"
#include <QComboBox>
#include <QVBoxLayout>

QtWidget::QtWidget (QWidget * parent) : QGroupBox (parent)
{
    setTitle ("QWidget");
    QComboBox * comboColors = new QComboBox     (this);
    comboColors->addItems ({"Apple", "Orange", "Nut"});
    QVBoxLayout * layoutTop = new QVBoxLayout ();
    layoutTop->addWidget (comboColors);
    setLayout (layoutTop);
}
