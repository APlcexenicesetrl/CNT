#include <windows.h>

enum ConsoleColor {
    Black = 0,
    Blue = 1,
    Green = 2,
    Cyan = 3,
    Red = 4,
    Magenta = 5,
    Yellow = 6,
    White = 7,
};

void SetConsoleColor(ConsoleColor textColor, ConsoleColor bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int color = textColor + (bgColor << 4);
    SetConsoleTextAttribute(hConsole, color);
}

void SetConsoleTextColor(ConsoleColor textColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}
