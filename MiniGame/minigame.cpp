#include "renderer.hpp"
#include <conio.h>

#define KEY_UP 72

int main()
{
    Shapes game(100, 100, 100, 100);
    float x = 100, y = 100;

    char key = getch();
    int value = key;
    if (value == KEY_UP)
    {
        std::cout << "bruh";
    }
    return 0;
}