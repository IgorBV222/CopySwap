#include "Car.h"

Car::Car(int minSpeed, int maxSpeed) : _minSpeed(minSpeed), _maxSpeed(maxSpeed) {
    log("constructor");
}

Car::Car(const Car& other) : _minSpeed(other._minSpeed), _maxSpeed(other._maxSpeed) {
    log("copy constructor");
    _minSpeed = other._minSpeed;
    _maxSpeed = other._maxSpeed;
}

Car& Car::operator=(Car&& other) noexcept {
    //оператор присваивания перемещением
    log("move assignment operator");
    std::swap(_minSpeed, other._minSpeed);
    std::swap(_maxSpeed, other._maxSpeed);
    return *this;
}

Car& Car::operator=(const Car& other)
{
    //оператор присваивания копированием
    log("copy assignment operator");
    Car tmp(other);
    std::swap(_minSpeed, tmp._minSpeed); //меняет местами
    std::swap(_maxSpeed, tmp._maxSpeed);
    return *this;
}

int Car::getMinSpeed() const
{
    return _minSpeed;
}

int Car::getMaxSpeed() const
{
    return _maxSpeed;
}
