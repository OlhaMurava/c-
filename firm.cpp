#include "firm.h"

using namespace std;
using namespace objects;

Firm::Firm(
    const int plane_race,
    const double income,
    const double losses,
    const double losses_excursions,
    const double losses_hotels,
    const double losses_planes,
    const double mass_tech,
    const double mass_food,
    const double mass_tourist,
    std::string hour,
    std::string name) :
    plane_race(plane_race),
    income(income),
    losses(losses),
    losses_excursions(losses_excursions),
    losses_hotels(losses_hotels),
    losses_planes(losses_planes),
    mass_tech(mass_tech),
    mass_food(mass_food),
    mass_tourist(mass_tourist),
    hour(move(hour)),
    name(move(name)) {}

void Firm::setPlaneRace(int plane_race) { this->plane_race = plane_race; }
void Firm::setIncome(double income) { this->income = income; }
void Firm::setLosses(double losses) { this->losses = losses; }
void Firm::setLossesExcursions(double losses_excursions) { this->losses_excursions = losses_excursions; }
void Firm::setLossesHotels(double losses_hotels) { this->losses_hotels = losses_hotels; }
void Firm::setLossesPlanes(double losses_planes) { this->losses_planes = losses_planes; }
void Firm::setMassTech(double mass_tech) { this->mass_tech = mass_tech; }
void Firm::setMassFood(double mass_food) { this->mass_food = mass_food; }
void Firm::setMassTourist(double mass_tourist) { this->mass_tourist = mass_tourist; }
void Firm::setHour(const std::string& hour) { this->hour = hour; }
void Firm::setRentability(const std::string& rentability) { this->name = name; }

int Firm::getPlaneRace() const { return plane_race; }
double Firm::getIncome() const { return income; }
double Firm::getLosses() const { return losses; }
double Firm::getLossesExcursions() const { return losses_excursions; }
double Firm::getLossesHotels() const { return losses_hotels; }
double Firm::getLossesPlanes() const { return losses_planes; }
double Firm::getMassTech() const { return mass_tech; }
double Firm::getMassFood() const { return mass_food; }
double Firm::getMassTourist() const { return mass_tourist; }
std::string Firm::getHour() const { return hour; }
std::string Firm::getName() const { return name; }

void Firm::printRentability() const {
    cout << fixed << setprecision(2);
    cout << "Доходи: ";
    cout << income << endl;
    cout << "Витрати: ";
    cout << losses << endl;
    cout << "Рентабельність: ";
    cout << income / losses << endl;
    cout << "< ------------------------ >" << endl;
}

void Firm::printServiceLosses() const {
    cout << fixed << setprecision(2);
    cout << "Доходи (ум. о.): ";
    cout << income << endl;
    cout << "Витрати представництва (ум. о.): ";
    cout << losses << endl;
    cout << "Витрати на екскурсійні послуги (ум. о.): ";
    cout << losses_excursions << endl;
    cout << "Витрати на авіаперевезення (ум. о.): ";
    cout << losses_planes << endl;
    cout << "Витрати на готельні агентства (ум. о.): ";
    cout << losses_hotels << endl;
    cout << "Витрати (загальні) (ум. о.): ";
    cout << losses_hotels << endl;
    cout << "< ------------------------ >" << endl;
}

void Firm::printCargo() const {
    const auto mass = (mass_food + mass_tech + mass_tourist) / 100;

    cout << fixed << setprecision(2);
    cout << "Рейс: ";
    cout << plane_race << endl;
    cout << "Харчовий вантаж (т): ";
    cout << mass_food << endl;
    cout << "Масова частка (%): ";
    cout << mass_food / mass << endl << endl;
    cout << "Туристичний вантаж (т): ";
    cout << mass_tourist << endl;
    cout << "Масова частка (%): ";
    cout << mass_tourist / mass << endl;
    cout << endl;
    cout << "Технічний вантаж (т): ";
    cout << mass_tech << endl;
    cout << "Масова частка (%): ";
    cout << mass_tech / mass << endl;
    cout << "< ------------------------ >" << endl;
}

