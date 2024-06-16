#pragma once
#include "tourist.h"

namespace objects
{
    class ChildTourist : public Tourist // похідний клас від Tourist.h
    {
    public:
        ChildTourist(std::string name,
            const int age,
            const int gender,
            std::string hotel,
            std::string category,
            const double data,
            const double enddata,
            std::string luggage,
            std::string time,
            const int race,
            std::string tag,
            std::string marking,
            const int rooms,
            const int visits,
            std::string agency,
            const int group,
            const double losses,
            const double mass);

        ~ChildTourist() override;

// Поліморфізм
        void print(const bool param = false) const;
        void printHotel() const;
        void printFinances() const;
        void printRaceInfo() const;
    };
}
