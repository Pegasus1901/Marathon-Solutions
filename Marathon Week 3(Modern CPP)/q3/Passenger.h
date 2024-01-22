#ifndef PASSENGER_H
#define PASSENGER_H

#include <memory>
#include <iostream>

#include "Ticket.h"

using Pointer = std::shared_ptr<Ticket>;
using RefType = std::reference_wrapper<Pointer>;

class Passenger
{
private:
    std::string _id;
    std::string _name;
    int _age;
    RefType _ticket;
    float _fare;
public:
    Passenger(std::string id, std::string name, int age, Pointer ticket, float fare);
    ~Passenger() = default;
    Passenger() = delete;
    Passenger(const Passenger &) = delete;
    Passenger(Passenger &&) = delete;
    Passenger operator=(const Passenger &) = delete;
    Passenger operator=(Passenger &&) = delete;

    std::string id() const { return _id; }

    std::string name() const { return _name; }

    int age() const { return _age; }

    Pointer ticket() const { return _ticket; }

    float fare() const { return _fare; }

    friend std::ostream &operator<<(std::ostream &os, const Passenger &rhs);
};

#endif // PASSENGER_H
