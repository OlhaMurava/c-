#pragma once

#include <iostream>
#include <string>

namespace objects {
    class Tourist {
    public:
        std::string name;
        int age;
        int gender;
        std::string hotel;
        std::string category;
        double data;
        double enddata;
        std::string places;
        std::string luggage;
        std:: string time;
        int race;
        std::string tag;
        std::string marking;
        int rooms;
        int visits;
        std::string agency;
        bool usedExcurions;
        int group;
        double losses;
        double mass;

        Tourist(std::string name,
            const int age,
            const int gender,
            std::string hotel,
            std::string category,
            const double data,
            const double enddata,
            std::string places,
            std::string luggage,
            std::string time,
            const int race,
            std::string tag,
            std::string marking,
            const int rooms,
            const int visits,
            std::string agency,
            const bool usedExcurions,
            const int group,
            const double losses,
            const double mass);

        void print(const bool param = false) const;
        void printHotel() const;
        void printFinances() const;
        void printRaceInfo() const;
    };
}
