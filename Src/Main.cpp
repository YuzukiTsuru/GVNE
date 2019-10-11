#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "Main.h"
#include "ApplicationInfo.h"

int main(int argc, char *argv[]) {

    std::cout << ProjectInfo::ProjectName
              << "\nVersion: "
              << ProjectInfo::VERSION
              << std::endl;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    qmlRegisterType<ApplicationInfo>("com.GVNE.ApplicationInfo", 1, 0, "ApplicationInfo");

    engine.load(QUrl(QStringLiteral("qrc:QML/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QGuiApplication::exec();
}
