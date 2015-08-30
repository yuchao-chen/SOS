#include <QtCore>
#include "NetworkAnalyzer.h"

int main (int argc, char * argv [])
{
    QCoreApplication application (argc, argv);
    NetworkAnalyzer networkAnalyzer (& application);
    return application.exec ();
}
