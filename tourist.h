#pragma once

#include <iostream>
#include <string>

namespace objects {
    class Tourist {
    protected:        // записуємо змінні у захищеному доступі, щоб потім можна було застосувати успадкування
        std::string name;
        int age;
        int gender;
        std::string hotel;
        std::string category;
        double data;
        double enddata;
        std::string luggage;
        std::string time;
        int race;
        std::string tag;
        std::string marking;
        int rooms;
        int visits;
        std::string agency;
        int group;
        double losses;
        double mass;
    public: // публічний доступ
        Tourist(std::string name,
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

        virtual ~Tourist(); 
        // Setters
        void setName(const std::string& name);
        void setAge(int age);
        void setGender(int gender);
        void setHotel(const std::string& hotel);
        void setData(double data);
        void setEndData(double enddata);
        void setLuggage(const std::string& luggage);
        void setTime(const std::string& time);
        void setRace(int race);
        void setTag(const std::string& tag);
        void setMarking(const std::string& marking);
        void setRooms(int rooms);
        void setVisits(int visits);
        void setAgency(const std::string& agency);
        void setGroup(int group);
        void setLosses(double losses);
        void setMass(double mass);
        void setCategory(const std::string& category);

        // Getters
        std::string getName() const;
        int getAge() const;
        int getGender() const;
        std::string getHotel() const;
        double getData() const;
        double getEndData() const;
        std::string getLuggage() const;
        std::string getTime() const;
        int getRace() const;
        std::string getTag() const;
        std::string getMarking() const;
        int getRooms() const;
        int getVisits() const;
        std::string getAgency() const;
        int getGroup() const;
        double getLosses() const;
        double getMass() const;
        std::string getCategory() const;
// Віртуальні функції, поліморфізм
        virtual void print(const bool param = false) const = 0;
        virtual void printHotel() const = 0;
        virtual void printFinances() const = 0;
        virtual void printRaceInfo() const = 0;

    };
}
