#include "storage.h"

using namespace std;
using namespace objects;

Storage::Storage(const double mass,
    const int planes_carier,
    const int planes_passenger,
    const int planes,
    const int seats) :
    mass(mass),
    planes_carier(planes_carier),
    planes_passenger(planes_passenger),
    planes(planes),
    seats(seats) {}

// Setters
void Storage::setMass(double mass) { this->mass = mass; }
void Storage::setPlanesCarrier(int planes_carier) { this->planes_carier = planes_carier; }
void Storage::setPlanesPassenger(int planes_passenger) { this->planes_passenger = planes_passenger; }
void Storage::setPlanes(int planes) { this->planes = planes; }
void Storage::setSeats(int seats) { this->seats = seats; }

// Getters
double Storage::getMass() const { return mass; }
int Storage::getPlanesCarrier() const { return planes_carier; }
int Storage::getPlanesPassenger() const { return planes_passenger; }
int Storage::getPlanes() const { return planes; }
int Storage::getSeats() const { return seats; }

void Storage::print() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Маса вантажу (т): ";
    cout << mass << endl;
    cout << "Кількість літаків (вантажних): ";
    cout << planes_carier << endl;
    cout << "Кількість літаків (вантажно-пасажирських): ";
    cout << planes_passenger << endl;
    cout << "Загальна кількість літаків: ";
    cout << planes << endl;
    cout << "Кількість місць: ";
    cout << seats << endl;
    cout << "[< ------------------------- >]" << endl;
}


