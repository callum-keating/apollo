#include <iostream>
#ifdef _WIN32
#include <windows.h>
#endif
namespace apollo {
    int addTerm(const char* toPrint) {
        std::cout << toPrint;
        return 0;
    }
    int clearTerm() {
        std::cout << "\x1b[2J\x1b[H";
        return 0;
    }
    int setCursor(int x, int y) {
        std::cout << "%c[%d;%df" << "0x1B" << y << x;
        return 0;
    }
}