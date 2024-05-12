#pragma once
#include <iostream>

namespace objects {
    class Storage {
    public:
        double mass;
        int planes_carier, planes_passenger;
        int planes;
        int seats;
        Storage(const double mass,
            const int planes_carier,
            const int planes_passenger,
            const int planes,
            const int seats);

        void print() const;
    };
}
