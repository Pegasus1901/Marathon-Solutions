#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<vector>
#include"TouristVehicle.h"

using Pointer = std::shared_ptr<TouristVehicle>;

using Container = std::vector<Pointer>;

//This function creates 3 objects
void CreateObjects(Container& vehicles);

//This function returns a container of vehicles for given inputs
Container ListOfContainers(const Container& vehicles);

//This function Returns average CAB permit
float AvgPermitDurationCAB(const Container& vehicles);

//This function return minimum booking charge
TypeOfPermit MinimumBookingCharge(Container& vehicles);

//This function gives n objects from last
Container LastNObjects(const Container& vehicles, int number);


#endif // FUNCTIONALITIES_H
