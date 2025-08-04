#ifdef _WIN32
#include <windows.h>
#endif

#ifdef _WIN32
int getConsoleDimensions(int *array)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);

    array[0] = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    array[1] = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
    return 0;
}
#endif