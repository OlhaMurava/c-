#pragma once

#include <iostream>

namespace objects {
    class Plane {
    public:
        int number;
        double mass, volume;
        int passengers;

        Plane(const int number,
            const double mass,
            const double volume,
            const int passengers);

        void print() const;
    };
}
