//
// Created by gloom on 2020/8/12.
//

#ifndef GVNE_GVNE_H
#define GVNE_GVNE_H

#include <iostream>

class GVNE_APP_INFO {
public:
    std::string AppName = "GVNE - Gal (Visual Novel) Game Engine";
};

class GVNE_APP {
public:
    static void framebuffer_size_callback(GLFWwindow *window, int width, int height);
    static void processInput(GLFWwindow *window);
};

#endif //GVNE_GVNE_H
