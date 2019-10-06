#include <QGuiApplication>
#include <QQmlApplicationEngine>

#include "Main.h"
#include "ApplicationInfo.h"

int main(int argc, char *argv[]) {

    std::cout << "G V N E \n"
              << ProjectInfo::VERSION
              << std::endl;

    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:QML/main.qml")));

    if (engine.rootObjects().isEmpty()) {
        return -1;
    }

    return QGuiApplication::exec();
}
