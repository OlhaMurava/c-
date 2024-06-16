#pragma once
#include "tourist.h"

//дочірній клас від Tourist.h

namespace objects {
    class CargoTourist : public Tourist
    {
    private:
        std::string cargo; //приватна зона доступу, змінна оголошена всередині класу, інкапсуляція

    public:
        CargoTourist(std::string name,
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
            const double mass,
            std::string cargo);

        ~CargoTourist() override;
        void setCargo(const std::string& cargo);

        std::string getCargo() const;

// Поліморфізм
        void print(const bool param = false) const;
        void printHotel() const;
        void printFinances() const;
        void printRaceInfo() const;
    };
}

