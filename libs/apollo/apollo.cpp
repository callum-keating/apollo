#include <iostream>
#include <array>
#ifdef _WIN32
#include <windows.h>
#endif
namespace apollo {
    int print(const char* toPrint) {
        std::cout << toPrint;
        return 0;
    }
    int clearTerm() {
        std::cout << "\x1b[2J\x1b[H";
        return 0;
    }
    int setCursor(int x, int y) {
        #ifdef _WIN32
        COORD coord;
        coord.X = x;
        coord.Y = y;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
        #endif
        return 0;
    }
    std::array<int, 2> getConsoleSize() {
        CONSOLE_SCREEN_BUFFER_INFO csbi;
        int columns, rows;

        GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
        columns = csbi.srWindow.Right - csbi.srWindow.Left + 1;
        rows = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
        return {columns, rows};
    }
}