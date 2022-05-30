#pragma once

#include <graphics.h>
#include <iostream>
#include <ctime>
#include <string>
#include <math.h>

class Cylindre
{
private:
    int rad, hight;

public:
    Cylindre(int rad, int hight);
    void CylindreInit();
    void cercleTop(int v, int w, int rad);
    void cercleBot(int v, int w, int rad, int hight);
};
///////////////////////////////////////////////////////////////////////////////////////////////////
void DisplayInit()
{
    initwindow(800, 600, "Sphere Presentation");
};
///////////////////////////////////////////////////////////////////////////////////////////////////
Cylindre::Cylindre(int rad, int hight)
{
    this->rad = rad;
    this->hight = hight;
};
///////////////////////////////////////////////////////////////////////////////////////////////////
void Cylindre::CylindreInit()
{
    int rad = this->rad, diametre, hight = this->hight, x = 100, y = 100, x2 = 100, y2 = 100, v, w;

    diametre = (rad * 2);

    y2 = hight; // same ---  // diff |

    line(x, y, x2, y2);
    v = x;

    x = 100, y = 100, x2 = 100, y2 = 100;

    y2 = hight; // same ---  // diff |

    x2 = x2 + diametre; //same | // diff ---
    x = x + diametre;   //same | // diff ---

    line(x, y, x2, y2);
    w = x;

    cercleTop(v, w, rad);
    cercleBot(v, w, rad, hight);
};
///////////////////////////////////////////////////////////////////////////////////////////////////
void Cylindre::cercleTop(int v, int w, int rad)
{
    int o = (v + w) / 2;
    int q = o - rad;
    circle(o, q, rad);
}
///////////////////////////////////////////////////////////////////////////////////////////////////
void Cylindre::cercleBot(int i, int j, int rad, int hight)
{
    int o = (i + j) / 2;
    circle(o, hight, rad);
}
///////////////////////////////////////////////////////////////////////////////////////////////////