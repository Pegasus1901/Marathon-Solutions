#include "Sensor.h"

std::ostream &operator<<(std::ostream &os, const Sensor &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _type: " << static_cast<int>(rhs._type)
       << " _reading: " << rhs._reading;
    return os;
}

Sensor::Sensor(int id, std::string name, TypeofSensor type, int reading)
    : _id(id), _name(name), _type(type), _reading(reading)
{
}

Sensor::Sensor()
{
    if (reading() < 0)
    {
        throw std::runtime_error("Reading Value is Negative!!!");
    }
    if (reading() > 20)
    {
        throw std::runtime_error("Reading Value is Greater than 20!!!");
    }
    if (reading() / 10 == 0)
    {
        throw std::runtime_error("Reading Value is Divisible by 10!!!");
    }
}
