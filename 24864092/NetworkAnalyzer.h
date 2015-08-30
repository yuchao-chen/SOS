#ifndef QT_NETWORK_ANALYZER_H
#define QT_NETWORK_ANALYZER_H

#include <QObject>

class NetworkAnalyzer : public QObject
{
    Q_OBJECT

    public:
        explicit NetworkAnalyzer    (QObject * parent = nullptr);
        virtual ~NetworkAnalyzer    () = default;

    private slots:
        void onTimeout              ();
};

#endif//QT_NETWORK_ANALYZER_H
