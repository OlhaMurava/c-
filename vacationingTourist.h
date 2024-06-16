#pragma once
#include "tourist.h"

// похідний клас від tourist.h
namespace objects {
    class VacationingTourist : public Tourist {
    private:
        std::string places; // приватна зона доступу, змінні оголошені всередині класу, інкапсуляція

    public:
        VacationingTourist(std::string name,
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
            const int group,
            const double losses,
            const double mass);

        ~VacationingTourist() override;

        void setPlaces(const std::string& places);

        std::string getPlaces() const;

//Поліморфізм
        void print(const bool param = false) const;
        void printHotel() const;
        void printFinances() const;
        void printRaceInfo() const;
    };
}
