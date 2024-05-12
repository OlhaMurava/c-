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
    seats(seats){}

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
