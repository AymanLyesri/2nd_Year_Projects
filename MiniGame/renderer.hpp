#pragma once

#include <graphics.h>
#include <iostream>

class Shapes
{
private:
    int x1, y1;
    int x2, y2;

public:
    Shapes(int x1, int y1, int x2, int y2)
    {
        this->x1 = x1;
        this->y1 = y1;
        this->x2 = x2;
        this->y2 = y2;
    };
    void Square(int x, int y);
    void PlatForme();
};
void DisplayInit()
{
    initwindow(800, 600, "game");
};

void Shapes::Square(int x, int y)
{
    line(x, y, x, y + 100);
    line(x + 100, y, x + 100, y + 100);

    line(x, y, x + 100, y);
    line(x, y + 100, x + 100, y + 100);
};
void Shapes::PlatForme()
{
    line(0, 400, 1000, 400);
}