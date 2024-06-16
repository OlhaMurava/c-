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
    string luggage,
    string time,
    const int race,
    string tag,
    string marking,
    const int rooms,
    const int visits,
    string agency,
    const int group,
    const double losses,
    const double mass) :
    name(move(name)),
    age(age),
    gender(gender),
    hotel(move(hotel)),
    category(category),
    data(data),
    enddata(enddata),
    luggage(move(luggage)),
    time(move(time)),
    race(race),
    tag(move(tag)),
    marking(move(marking)),
    rooms(rooms),
    visits(visits),
    agency(move(agency)),
    group(group),
    losses(losses),
    mass(mass) {}

objects::Tourist::~Tourist()
{
}

void Tourist::setName(const std::string& name) { this->name = name; }
void Tourist::setAge(int age) { this->age = age; }
void Tourist::setGender(int gender) { this->gender = gender; }
void Tourist::setHotel(const std::string& hotel) { this->hotel = hotel; }
void Tourist::setData(double data) { this->data = data; }
void Tourist::setEndData(double enddata) { this->enddata = enddata; }
void Tourist::setLuggage(const std::string& luggage) { this->luggage = luggage; }
void Tourist::setTime(const std::string& time) { this->time = time; }
void Tourist::setRace(int race) { this->race = race; }
void Tourist::setTag(const std::string& tag) { this->tag = tag; }
void Tourist::setMarking(const std::string& marking) { this->marking = marking; }
void Tourist::setRooms(int rooms) { this->rooms = rooms; }
void Tourist::setVisits(int visits) { this->visits = visits; }
void Tourist::setAgency(const std::string& agency) { this->agency = agency; }
void Tourist::setGroup(int group) { this->group = group; }
void Tourist::setLosses(double losses) { this->losses = losses; }
void Tourist::setMass(double mass) { this->mass = mass; }
void Tourist::setCategory(const std::string& category) { this->category = category; }


std::string Tourist::getName() const { return name; }
int Tourist::getAge() const { return age; }
int Tourist::getGender() const { return gender; }
std::string Tourist::getHotel() const { return hotel; }
double Tourist::getData() const { return data; }
double Tourist::getEndData() const { return enddata; }
std::string Tourist::getLuggage() const { return luggage; }
std::string Tourist::getTime() const { return time; }
int Tourist::getRace() const { return race; }
std::string Tourist::getTag() const { return tag; }
std::string Tourist::getMarking() const { return marking; }
int Tourist::getRooms() const { return rooms; }
int Tourist::getVisits() const { return visits; }
std::string Tourist::getAgency() const { return agency; }
int Tourist::getGroup() const { return group; }
double Tourist::getLosses() const { return losses; }
double Tourist::getMass() const { return mass; }
std::string Tourist::getCategory() const { return category; }
