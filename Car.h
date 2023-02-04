#pragma once
#include <iostream>
#include <algorithm>

class Car
{
public:
    Car(int minSpeed, int maxSpeed);
   
    ~Car() {
        log("destructor");
    };    

    Car(const Car& other); 

    Car& operator=(Car&& other) noexcept;
    Car& operator=(const Car& other);

    int getMinSpeed()const;
    int getMaxSpeed()const;

private:
    void log(const char* msg) {
        std::cout << "[" << this << "]" << msg << "\n";
    }
    int _minSpeed;
    int _maxSpeed;
};

