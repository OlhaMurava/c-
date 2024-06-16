#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace objects {
    class Agency {
    private:       // приватна зона доступу, змінні прописані всередині класу, інкапсуляція
        std::string name;
        int rating;
        std::string popular;
        std::vector<std::string> excursions;
    public:
        Agency(std::string name,
            const int rating);

        // Setters
        void setName(const std::string& name);
        void setRating(int rating);
        void setPopular(const std::string& popular);
        void setExcursions(const std::vector<std::string>& excursions);

        // Getters
        std::string getName() const;
        int getRating() const;
        std::string getPopular() const;
        std::vector<std::string> getExcursions() const;

        void print() const;
    };
}

