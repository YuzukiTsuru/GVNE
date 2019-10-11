#include "ApplicationInfo.h"

ApplicationInfo::ApplicationInfo(QObject *parent) : QObject(parent) {}

QString ApplicationInfo::appVer() {
    QString appInfo = m_appName + " | " + m_copyRight + " | " + m_appVer;
    return appInfo;
}

QString ApplicationInfo::appName() {
    return m_appName;
}