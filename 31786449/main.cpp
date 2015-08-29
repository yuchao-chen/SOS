#include <QApplication>
#include <QFile>
#include "MainWidget.h"

int main (int argc, char * argv [])
{
    QApplication application (argc, argv);
    MainWidget mainWidget;
    mainWidget.show ();
    QFile qssFile (":/style.qss");
    qssFile.open (QFile::ReadOnly);
    mainWidget.setStyleSheet (QLatin1String (qssFile.readAll () ) );
    return application.exec ();
}
