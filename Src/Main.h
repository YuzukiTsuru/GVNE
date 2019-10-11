#ifndef GVNE_MAIN_H
#define GVNE_MAIN_H

#include <iostream>

class Main {
public:

private:
};

namespace ProjectInfo {
    const std::string ProjectName = "Gal Visual Novel Engine";
    const QString QProjectName = QString::fromStdString(ProjectName);

    const std::string VERSION = "0.0.1A";
    const QString QVERSION = QString::fromStdString(VERSION);

    const std::string CopyRight = "GloomyGhost © 2019";
    const QString QCopyRight = QString::fromStdString(CopyRight);
}

#endif //GVNE_MAIN_H
