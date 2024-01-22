#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<memory>
#include<vector>

#include"CabBooking.h"
#include"CashPaymentCabBooking.h"
#include"OnlinePaymentCabBooking.h"

using Pointer = std::shared_ptr<CabBooking>;

using Container = std::vector<Pointer>;

//This function creates 3 objects
void CreateObjects(Container& cab);

//This function returns a container of cab for given inputs
Container SamePickupLocation(const Container& cab, std::string location);

//This function Returns average CAB permit
std::string IdHighestCabFare(const Container& cab);


//This function return minimum booking charge
 Container NInstancesOfContainer(Container& cab);

//This function gives n objects from last
bool CashBookingAbove_1000(const Container& cab, int number);



#endif // FUNCTIONALITIES_H
