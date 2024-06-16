#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "firm.h"
#include "tourist.h"
#include "agency.h"
#include "plane.h"
#include "storage.h"
#include "vacationingTourist.h"
#include "cargoTourist.h"
#include "child.h"

using namespace std;

namespace objects 
{
    class TouristGroup
    {
        string name;
        vector<VacationingTourist> vacationingTourists;
        vector<CargoTourist> cargoTourists;
        vector<ChildTourist> childTourists;
        vector<Agency> agencies;
        vector<Plane> planes;
        vector<Firm> firms;

    public:
        TouristGroup();
        TouristGroup(string name, 
            vector<VacationingTourist> vacationingTourists, 
            vector<CargoTourist> cargoTourists, 
            vector<ChildTourist> childTourists, 
            vector<Agency> agencies, 
            vector<Plane> planes, 
            vector<Firm> firms);

        // Setters
        void setName(const std::string& newName);
        void setVacationingTourists(const std::vector<VacationingTourist>& newVacationingTourists);
        void setCargoTourists(const std::vector<CargoTourist>& newCargoTourists);
        void setChildTourists(const std::vector<ChildTourist>& newChildTourists);
        void setAgencies(const std::vector<Agency>& newAgencies);
        void setPlanes(const std::vector<Plane>& newPlanes);
        void setFirms(const std::vector<Firm>& newFirms);

        // Getters
        std::string getName() const;
        std::vector<VacationingTourist> getVacationingTourists() const;
        std::vector<CargoTourist> getCargoTourists() const;
        std::vector<ChildTourist> getChildTourists() const;
        std::vector<Agency> getAgencies() const;
        std::vector<Plane> getPlanes() const;
        std::vector<Firm> getFirms() const;

        void printVacationingTourist();
        void printCargoTourist();
        void printChildTourist();
        void printResettlement(const string hotel, bool& found);
        void printVisitorsCountry(const string time, bool& found);
        void printTouristInformation(const string name, bool& found);
        void printHotels(const string hotel, bool& found);
        void printAgencies();
        void printFlight(const int number, bool& found);
        void printReport(const string group, bool& found);
        void printExpensesAndIncome(const string hour, const string name, bool& found);
        void printSentCargo();
        void printFirmRentability(const string name, bool& found);
        void printRaceInformation(const int race, bool& found);
        
    };
}
