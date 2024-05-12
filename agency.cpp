#include "agency.h"

using namespace std;
using namespace objects;

Agency::Agency(string name,
    const int rating) :
    name(move(name)),
    rating(rating) {}

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
