#include "libs/apollo/apollo.h"

int main() {
    apollo::clearTerm();
    apollo::setCursor(10,10);
    apollo::print("hello");
    apollo::setCursor(0,0);
    apollo::print("hello2");
    std::array<int, 2> size = apollo::getConsoleSize();
    std::string sizeStr = std::to_string(size[0]) + " " + std::to_string(size[1]);
    apollo::print(sizeStr.c_str());
    apollo::setCursor(0,0);
    std::cin.ignore();
    apollo::clearTerm();
    while (true) {
        std::array<int, 2> size = apollo::getConsoleSize();
        std::string sizeStr = std::to_string(size[0]) + " " + std::to_string(size[1]);
        apollo::print(sizeStr.c_str());
        apollo::clearTerm();
    }
    return 0;
}