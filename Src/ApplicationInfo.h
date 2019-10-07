#ifndef GVNE_APPLICATIONINFO_H
#define GVNE_APPLICATIONINFO_H

#include <QObject>
#include <QColor>

#include "Main.h"

class ApplicationInfo : public QObject {
public:
    Q_PROPERTY(QString name READ getName)

    ApplicationInfo();
public slots:
    QString getAppVer();
private:
    QString AppVer = QString::fromStdString(ProjectInfo::VERSION);
};

#endif //GVNE_APPLICATIONINFO_H
