#include "touristGroup.h"

using namespace std;
using namespace objects;

TouristGroup::TouristGroup() {};
TouristGroup::TouristGroup(string name, 
	vector<VacationingTourist> vacationingTourists, 
	vector<CargoTourist> cargoTourists, 
	vector<ChildTourist> childTourists, 
	vector<Agency> agencies, 
	vector<Plane> planes, 
	vector<Firm> firms) :
	name(name),
	vacationingTourists(vacationingTourists),
	cargoTourists(cargoTourists),
	childTourists(childTourists),
	agencies(agencies),
	planes(planes),
	firms(firms) {}

void TouristGroup::setName(const std::string& newName) { this->name = newName; }
void TouristGroup::setVacationingTourists(const std::vector<VacationingTourist>& newVacationingTourists) { this->vacationingTourists = newVacationingTourists; }
void TouristGroup::setCargoTourists(const std::vector<CargoTourist>& newCargoTourists) { this->cargoTourists = newCargoTourists; }
void TouristGroup::setChildTourists(const std::vector<ChildTourist>& newChildTourists) { this->childTourists = newChildTourists; }
void TouristGroup::setAgencies(const std::vector<Agency>& newAgencies) { this->agencies = newAgencies; }
void TouristGroup::setPlanes(const std::vector<Plane>& newPlanes) { this->planes = newPlanes; }
void TouristGroup::setFirms(const std::vector<Firm>& newFirms) { this->firms = newFirms; }

std::string TouristGroup::getName() const { return name; }
std::vector<VacationingTourist> TouristGroup::getVacationingTourists() const { return vacationingTourists; }
std::vector<CargoTourist> TouristGroup::getCargoTourists() const { return cargoTourists; }
std::vector<ChildTourist> TouristGroup::getChildTourists() const { return childTourists; }
std::vector<Agency> TouristGroup::getAgencies() const { return agencies; }
std::vector<Plane> TouristGroup::getPlanes() const { return planes; }
std::vector<Firm> TouristGroup::getFirms() const { return firms; }

void TouristGroup::printVacationingTourist()
{
    for (auto& tourist : vacationingTourists)
    {
        tourist.print();
    }
}
void TouristGroup::printCargoTourist()
{
    for (auto& tourist : cargoTourists)
    {
        tourist.print();
    }
}
void TouristGroup::printChildTourist()
{
    for (auto& tourist : childTourists)
    {
        tourist.print();
    }
}
void TouristGroup::printResettlement(const string hotel, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getHotel() == hotel)
        {
            tourist.print();
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getHotel() == hotel)
        {
            tourist.print();
            found = true;
        }
    }
}
void TouristGroup::printVisitorsCountry(const string time, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getTime() == time)
        {
            tourist.print();
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getTime() == time)
        {
            tourist.print();
            found = true;
        }
    }
}
void TouristGroup::printTouristInformation(const string name, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getName() == name)
        {
            tourist.print(true);
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getName() == name)
        {
            tourist.print(true);
            found = true;
        }
    }

    for (auto& tourist : childTourists)
    {
        if (tourist.getName() == name)
        {
            tourist.print(true);
            found = true;
        }
    }
}
void TouristGroup::printHotels(const string hotel, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getHotel() == hotel)
        {
            tourist.printHotel();
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getHotel() == hotel)
        {
            tourist.printHotel();
            found = true;
        }
    }

    for (auto& tourist : childTourists)
    {
        if (tourist.getHotel() == hotel)
        {
            tourist.printHotel();
            found = true;
        }
    }
}
void TouristGroup::printAgencies()
{
    for (auto& agency : agencies)
    {
        agency.print();
    }
}
void TouristGroup::printFlight(const int number, bool& found)
{
    for (auto& plane : planes)
    {
        if (plane.getNumber() == number)
        {
            plane.print();
            found = true;
        }
    }
}
void TouristGroup::printReport(const string group, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getGroup() == stoi(group))
        {
            tourist.printFinances();
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getGroup() == stoi(group))
        {
            tourist.printFinances();
            found = true;
        }
    }
}
void TouristGroup::printExpensesAndIncome(const string hour, const string name, bool& found)
{
    for (auto& firm : firms) {
        if ((hour == "Зима" || hour == "Вечна" || hour == "Літо" || hour == "Осінь") && (firm.getName() == name)) {

            firm.printServiceLosses();
            found = true;
            break;
        }
    }
}
void TouristGroup::printSentCargo()
{
    for (auto& firm : firms) {
        firm.printCargo();
    }
}
void TouristGroup::printFirmRentability(const string name, bool& found)
{
    for (auto& firm : firms)
    {
        if (firm.getName() == name)
        {
            firm.printRentability();
            found = true;
        }
    }
}
void TouristGroup::printRaceInformation(const int race, bool& found)
{
    for (auto& tourist : vacationingTourists)
    {
        if (tourist.getRace() == race)
        {
            tourist.printRaceInfo();
            found = true;
        }
    }

    for (auto& tourist : cargoTourists)
    {
        if (tourist.getRace() == race)
        {
            tourist.printRaceInfo();
            found = true;
        }
    }

    for (auto& tourist : childTourists)
    {
        if (tourist.getRace() == race)
        {
            tourist.printRaceInfo();
            found = true;
        }
    }
}

