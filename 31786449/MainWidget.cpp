#include "MainWidget.h"
#include "QtWidget.h"
#include "QuickWidget.h"
#include <QHBoxLayout>


MainWidget::MainWidget (QWidget * parent)
            : QWidget (parent)
{
    setWindowTitle (tr ("QWidget and QtQuick common QSS") );

    QtWidget    * qtWidget    = new QtWidget    (this);
    QuickWidget * quickWidget = new QuickWidget (this);
    QHBoxLayout * layoutTop   = new QHBoxLayout ();
    layoutTop->addWidget (qtWidget);
    layoutTop->addWidget (quickWidget);
    this->setLayout (layoutTop);
}
