#include<iostream>
#include"Functionalities.h"

int main()
{
    Container cabs;
    CreateObjects(cabs);
    SamePickupLocation(cabs,"Mumbai");
    std::cout <<"hiest price id is"<<IdHighestCabFare(cabs);
    
    return 0;
}
