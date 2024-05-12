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
