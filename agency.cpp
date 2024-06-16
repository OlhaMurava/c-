#include "agency.h"

using namespace std;
using namespace objects;

Agency::Agency(string name,
    const int rating) :
    name(move(name)),
    rating(rating) {}

// Setters
void Agency::setName(const std::string& name) { this->name = name; }
void Agency::setRating(int rating) { this->rating = rating; }
void Agency::setPopular(const std::string& popular) { this->popular = popular; }
void Agency::setExcursions(const std::vector<std::string>& excursions) { this->excursions = excursions; }

// Getters
std::string Agency::getName() const { return name; }
int Agency::getRating() const { return rating; }
std::string Agency::getPopular() const { return popular; }
std::vector<std::string> Agency::getExcursions() const { return excursions; }
// вивід
void Agency::print() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Найякісніше екскурсійне турагенство: ";
    cout << name << endl;
    cout << "Найпопулярніші екскурсії: ";
    cout << popular << endl;
    cout << "Рейтинг: ";
    cout << rating << endl;
    cout << "[< ------------------------- >]" << endl;
}
