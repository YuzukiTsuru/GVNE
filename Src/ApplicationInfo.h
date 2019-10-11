#ifndef GVNE_APPLICATIONINFO_H
#define GVNE_APPLICATIONINFO_H

#include <QObject>
#include <QString>

#include "Main.h"

class ApplicationInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString appVer READ appVer NOTIFY backSignal)
    Q_PROPERTY(QString appName READ appName NOTIFY backSignal)
public:
    explicit ApplicationInfo(QObject *parent = nullptr);
    QString appVer();
    QString appName();
signals:
    void backSignal();
private:
    QString m_appVer = ProjectInfo::QVERSION;
    QString m_copyRight = ProjectInfo::QCopyRight;
    QString m_appName = ProjectInfo::QProjectName;
};

#endif //GVNE_APPLICATIONINFO_H
