#include <iostream>
#include "cmake-cpp-project/app.h"

using namespace CMakeCppProject;

void App::run() {
    std::cout << "It works!" << std::endl;

    std::cout << "2 + 2 = " << Utils::Math::sum(2, 2) << std::endl;
}
