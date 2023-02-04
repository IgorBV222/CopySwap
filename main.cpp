#include <iostream>
#include "Car.h"

int main()
{
    Car c1 (20, 100);
    std::cout << " Car 1: MinSpeed " << c1.getMinSpeed() << " MaxSpeed " << c1.getMaxSpeed() << std::endl;
    Car c2(45, 110);
    std::cout << " Car 2: MinSpeed " << c2.getMinSpeed() << " MaxSpeed " << c2.getMaxSpeed() << std::endl;
    Car c3 (50, 150);
    std::cout << " Car 3: MinSpeed " << c3.getMinSpeed() << " MaxSpeed " << c3.getMaxSpeed() << std::endl;
    std::cout << "==============================\n";

    std::cout << "c2 = c1\n";
    c2 = c1;
    std::cout << " Car 2: MinSpeed " << c2.getMinSpeed() << " MaxSpeed " << c2.getMaxSpeed() << std::endl;
    std::cout << "==============================\n";


    std::cout << "c2 = std::move(c3) -> move lvalue -> rvalue\n";
    c2 = std::move(c3); //std::move lvalue в rvalue, c2.operator=(std::move(c3))
    std::cout << "ended assigning lvalue...\n";    
    std::cout << " Car 2: MinSpeed " << c2.getMinSpeed() << " MaxSpeed " << c2.getMaxSpeed() << std::endl;
}
