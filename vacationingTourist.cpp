#include "vacationingTourist.h"

using namespace std;
using namespace objects;

VacationingTourist::VacationingTourist(std::string name,
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
    const double mass) :
    Tourist(name,
        age,
        gender,
        hotel,
        category,
        data,
        enddata,
        luggage,
        time,
        race,
        tag,
        marking,
        rooms,
        visits,
        agency,
        group,
        losses,
        mass),
    places(places) {}

VacationingTourist::~VacationingTourist() {};

void VacationingTourist::setPlaces(const std::string& places) { this->places = places; }

std::string VacationingTourist::getPlaces() const { return places; }


void VacationingTourist::print(const bool param) const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Вік: ";
    cout << age << endl;
    cout << "Стать: ";

    if (gender == 0) {
        cout << "Чоловіча";
    }

    if (gender == 1) {
        cout << "Жіноча";
    }

    cout << endl;
    cout << "Категорія: ";
    cout << category << endl;

    if (param) {
        cout << "Готель: ";
        cout << hotel << endl;
        cout << "Відвідин Франції: ";
        cout << visits << endl;
        cout << "Агентство: ";
        cout << agency << endl;
        cout << "Дата прильоту: ";
        cout << data << endl;
        cout << "Дата відльоту: ";
        cout << enddata << endl;
        cout << "Обрана екскурсія: ";
        cout << places << endl;
        cout << "Вантаж, який здавав: ";
        cout << luggage << endl;
        cout << "Період перебування: ";
        cout << time << endl;
    }

    cout << "[< ------------------------- >]" << endl;
}

void VacationingTourist::printHotel() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Кількість займаних номерів: ";
    cout << rooms << endl;
    cout << "Період проживання: ";
    cout << time << endl;
    cout << "[< ------------------------- >]" << endl;
}


void VacationingTourist::printFinances() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Категорія: ";
    cout << category << endl;
    cout << "Витрати (ум. о.): ";
    cout << losses << endl;
    cout << "[< ------------------------- >]" << endl;
}

void VacationingTourist::printRaceInfo() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Група: ";
    cout << group << endl;
    cout << "Готель: ";
    cout << hotel << endl;
    cout << "Вантаж: ";
    cout << luggage << endl;
    cout << "Форма бирки: ";
    cout << tag << endl;
    cout << "Колір маркування: ";
    cout << marking << endl;
    cout << "[< ------------------------- >]" << endl;
}

