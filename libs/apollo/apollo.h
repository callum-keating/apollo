#include <iostream>
#include <array>

namespace apollo {
    int print(const char* toPrint);
    int clearTerm();
    int setCursor(int x, int y);
    std::array<int, 2> getConsoleSize();
    int waitKey();
}