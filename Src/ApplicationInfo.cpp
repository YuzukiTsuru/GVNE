#include <QObject>
#include "ApplicationInfo.h"

ApplicationInfo::ApplicationInfo()= default;;

QString ApplicationInfo::getAppVer() {
    return AppVer;
}