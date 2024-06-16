#pragma once

#include <iostream>

namespace objects {
    class Plane {
    private:     // приватна зона доступу, змінні прописані всередині класу, інкапсуляція
        int number;
        double mass, volume;
        int passengers;
    public:
        Plane(const int number,
            const double mass,
            const double volume,
            const int passengers);

        // Setters
        void setNumber(int number);
        void setMass(double mass);
        void setVolume(double volume);
        void setPassengers(int passengers);

        // Getters
        int getNumber() const;
        double getMass() const;
        double getVolume() const;
        int getPassengers() const;


        void print() const;
    };
}

