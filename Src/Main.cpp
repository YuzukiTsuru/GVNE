#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "Main.h"
#include "ApplicationInfo.h"

int main(int argc, char *argv[]) {

    std::cout << "Gal Visual Novel Engine \nVersion: "
              << ProjectInfo::VERSION
              << std::endl;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("ApplicationInfo", new ApplicationInfo);

    engine.load(QUrl(QStringLiteral("qrc:QML/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QGuiApplication::exec();
}
