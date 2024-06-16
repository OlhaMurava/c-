#pragma once
#include <iostream>

namespace objects {
    class Storage {
    private:       // приватна зона доступу, змінні оголошенні всередині класу, інкапсуляція
        double mass;
        int planes_carier, planes_passenger;
        int planes;
        int seats;
    public:
        Storage(const double mass,
            const int planes_carier,
            const int planes_passenger,
            const int planes,
            const int seats);

        // Setters
        void setMass(double mass);
        void setPlanesCarrier(int planes_carier);
        void setPlanesPassenger(int planes_passenger);
        void setPlanes(int planes);
        void setSeats(int seats);

        // Getters
        double getMass() const;
        int getPlanesCarrier() const;
        int getPlanesPassenger() const;
        int getPlanes() const;
        int getSeats() const;

        void print() const;
    };
}


