#include "plane.h"

using namespace std;
using namespace objects;

Plane::Plane(const int number,
    const double mass,
    const double volume,
    const int passengers) :
    number(number),
    mass(mass),
    volume(volume),
    passengers(passengers) {}

void Plane::setNumber(int number) { this->number = number; }
void Plane::setMass(double mass) { this->mass = mass; }
void Plane::setVolume(double volume) { this->volume = volume; }
void Plane::setPassengers(int passengers) { this->passengers = passengers; }

// Getters
int Plane::getNumber() const { return number; }
double Plane::getMass() const { return mass; }
double Plane::getVolume() const { return volume; }
int Plane::getPassengers() const { return passengers; }

void Plane::print() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Номер рейсу: ";
    cout << number << endl;
    cout << "Вага вантажу (т): ";
    cout << mass << endl;
    cout << "Об'єм вантажу (м3): ";
    cout << volume << endl;
    cout << "Кількість місць: ";
    cout << passengers << endl;
    cout << "[< ------------------------- >]" << endl;
}

