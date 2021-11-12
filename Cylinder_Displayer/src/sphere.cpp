#include "../include/renderer.hpp"

int main()
{
    int rad, hight;
    std::cout << "Enter the radius and hight of the cylindre." << std::endl;
    std::cin >> rad >> hight;

    DisplayInit();
    Cylindre c1(rad, hight);

    c1.CylindreInit();
    getch();

    return 0;
}