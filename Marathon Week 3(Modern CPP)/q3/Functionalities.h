#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<future>
#include<algorithm>
#include<thread>
#include"Passenger.h"

using PassPointer= std::shared_ptr<Passenger>;
using TicketPointer= std::shared_ptr<Ticket>;

using PassContainer= std::vector<PassPointer>;
using TicketContainer= std::vector<TicketPointer>;

void CreateObject(PassContainer& PassData, TicketContainer& TicketData);

void DisplayIdMatchingPassengers(const PassContainer& PassData, std::future<std::string>& id);

int AvgAgeOfPassedValues(const PassContainer& PassData,std::vector<std::string>& ids);
#endif // FUNCTIONALITIES_H
