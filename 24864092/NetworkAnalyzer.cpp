#include "NetworkAnalyzer.h"
#include <QTimer>
#include <QNetworkConfigurationManager>
#include <QNetworkSession>
#include <QDebug>

NetworkAnalyzer::NetworkAnalyzer (QObject * parent) : QObject (parent)
{
    QTimer * timer = new QTimer (this);
    connect (timer, SIGNAL (timeout () ), this, SLOT (onTimeout () ) );
    timer->start (1000);
}

void NetworkAnalyzer::onTimeout ()
{
    // eth0, eth1, wlan0, etc...
    const QString channelName ("eth0");
    auto * nwManager = new QNetworkConfigurationManager (this);
    auto configurations = nwManager->allConfigurations ();
    for (auto & configuration : configurations) {
        if (configuration.name () != channelName) {
            continue;
        }
        auto session = new QNetworkSession (configuration, this);

        session->open ();
        session->waitForOpened ();

        QString stateString;
        switch (session->state () ) {
            case QNetworkSession::Invalid:
                stateString = tr ("Invalid");
                break;
            case QNetworkSession::NotAvailable:
                stateString = tr ("NotAvailable");
                break;
            case QNetworkSession::Connecting:
                stateString = tr ("Connecting");
                break;
            case QNetworkSession::Connected:
                stateString = tr ("Connected");
                break;
            case QNetworkSession::Closing:
                stateString = tr ("Closing");
                break;
            case QNetworkSession::Disconnected:
                stateString = tr ("Disconnected");
                break;
            case QNetworkSession::Roaming:
                stateString = tr ("Roaming");
                break;
            default:
                stateString = tr ("Unknown");
        }

        qDebug () << tr ("Session info:");
        qDebug () << tr ("- usage:      %1;").arg (session->isOpen () ? tr ("Opened") : tr ("Closed") );
        qDebug () << tr ("- state:      %1;").arg (stateString);
        qDebug ();

        delete session;

        break;
    }
}
