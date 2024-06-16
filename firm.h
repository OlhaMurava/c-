#pragma once

#include <iostream>
#include <iomanip>

namespace objects {
    class Firm {
    private:    // приватна зона доступу, змінні оголошені всередині класу, інкапсуляція
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
        std::string name;
    public:
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
            std::string hour,
            std::string name);

// Setters
        void setPlaneRace(int plane_race);
        void setIncome(double income);
        void setLosses(double losses);
        void setLossesExcursions(double losses_excursions);
        void setLossesHotels(double losses_hotels);
        void setLossesPlanes(double losses_planes);
        void setMassTech(double mass_tech);
        void setMassFood(double mass_food);
        void setMassTourist(double mass_tourist);
        void setHour(const std::string& hour);
        void setRentability(const std::string& rentability);

// Getters
        int getPlaneRace() const;
        double getIncome() const;
        double getLosses() const;
        double getLossesExcursions() const;
        double getLossesHotels() const;
        double getLossesPlanes() const;
        double getMassTech() const;
        double getMassFood() const;
        double getMassTourist() const;
        std::string getHour() const;
        std::string getName() const;

        void printRentability() const;
        void printServiceLosses() const;
        void printCargo() const;
    };
}


