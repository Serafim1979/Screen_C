#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define gotoxy(x,y) {COORD d={x,y};\
            SetConsoleCursorPosition( \
                GetStdHandle(STD_OUTPUT_HANDLE), d);}

#define textattr(color) {\
            SetConsoleTextAttribute( \
                GetStdHandle(STD_OUTPUT_HANDLE), color);}

int main()
{
    textattr(0X3F);
    system("cls");
    puts("Hello world!\n");
    gotoxy(1, 20);
    textattr(0X1F);
    puts("Hello world!\n");
    gotoxy(20, 1);
    textattr(0XE4);
    puts("hello world!\n");
    textattr(0X07);
    return 0;
}
