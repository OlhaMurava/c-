#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace objects {
    class Agency {
    public:
        std::string name;
        int rating;
        std::string popular;
        std::vector<std::string> excursions;

        Agency(std::string name,
            const int rating);

        void print() const;
    };
}
