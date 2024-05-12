#pragma once

#include <iostream>
#include <iomanip>

namespace objects {
    class Firm {
    public:
        int plane_race;
        double income;
            double losses;
            double losses_excursions;
            double losses_hotels;
            double losses_planes;
            double mass_tech;
            double mass_food;
            double mass_tourist;
            std::string hour;
            std::string rentability;

        Firm(
            const int plane_race,
            const double income,
            const double losses,
            const double losses_excursions,
            const double losses_hotels,
            const double losses_planes,
            const double mass_tech,
            const double mass_food,
            const double mass_tourist,
            std:: string hour,
            std::string rentability);

        void printRentability() const;
        void printServiceLosses() const;
        void printCargo() const;
    };
}
