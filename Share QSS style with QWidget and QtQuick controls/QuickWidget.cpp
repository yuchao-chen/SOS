#include "QuickWidget.h"
#include <QQuickView>
#include <QVBoxLayout>

QuickWidget::QuickWidget (QWidget * parent) : QGroupBox (parent)
{
    setTitle ("QtQuick");
    QQuickView * view = new QQuickView ();
    view->setSource (QUrl ("qrc:///widget.qml") );
    view->setResizeMode (QQuickView::SizeRootObjectToView);
    QWidget * container = QWidget::createWindowContainer (view, this);
    QVBoxLayout * topLayout = new QVBoxLayout;
    topLayout->addWidget (container);
    setLayout (topLayout);
}
