#include "tourist.h"

using namespace std;
using namespace objects;

Tourist::Tourist(string name,
    const int age,
    const int gender,
    string hotel,
    string category,
    const double data,
    const double enddata,
    string places,
    string luggage,
    string time,
    const int race,
    string tag,
    string marking,
    const int rooms,
    const int visits,
    string agency,
    const bool usedExcurions,
    const int group,
    const double losses,
    const double mass) :
    name(move(name)),
    age(age),
    gender(gender),
    hotel(move(hotel)),
    category(move(category)),
    data(data),
    enddata(enddata),
    places(move(places)),
    luggage(move(luggage)),
    time(move(time)),
    race(race),
    tag(move(tag)),
    marking(move(marking)),
    rooms(rooms),
    visits(visits),
    agency(move(agency)),
    usedExcurions(usedExcurions),
    group(group),
    losses(losses),
    mass(mass) {}

void Tourist::print(const bool param) const {
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

void Tourist::printHotel() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Кількість займаних номерів: ";
    cout << rooms << endl;
    cout << "Період проживання: ";
    cout << time << endl;
    cout << "[< ------------------------- >]" << endl;
}

void Tourist::printFinances() const {
    cout << "[< ------------------------- >]" << endl;
    cout << "Ім'я: ";
    cout << name << endl;
    cout << "Категорія: ";
    cout << category << endl;
    cout << "Витрати (ум. о.): ";
    cout << losses << endl;
    cout << "[< ------------------------- >]" << endl;
}

void Tourist::printRaceInfo() const {
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
