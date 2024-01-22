#ifndef TICKET_H
#define TICKET_H

#include "TicketType.h"
#include <ostream>

class Ticket
{
private:
    float _tax;
    TicketType _type;

public:
    Ticket(float tax, TicketType type);//PC
    ~Ticket()=default;
    Ticket()=delete;
    Ticket(const Ticket&)=delete;
    Ticket(Ticket&&)=delete;
    Ticket operator=(const Ticket&)=delete;
    Ticket operator=(Ticket&&)=delete;

    float tax() const { return _tax; }

    TicketType type() const { return _type; }

    friend std::ostream &operator<<(std::ostream &os, const Ticket &rhs);
};

#endif // TICKET_H
