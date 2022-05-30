#include "../include/renderer.hpp"

int main()
{
    int rad, hight;
    std::cout << "Enter the radius (10->60) and hight (125->600) of the cylindre." << std::endl;

    do
    {
        std::cout << "\nradius : ";
        std::cin >> rad;
    } while (rad < 10 || rad > 60);
    do
    {
        std::cout << "\nhight : ";
        std::cin >> hight;
    } while (hight < 125 || hight > 600);

    DisplayInit();
    Cylindre c1(rad, hight);

    c1.CylindreInit();
    std::cout << "\n------------------------------COMPLETE!!------------------------------\n";
    getch();

    return 0;
}