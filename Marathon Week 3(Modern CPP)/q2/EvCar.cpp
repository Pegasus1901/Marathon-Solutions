#include "EvCar.h"

EvCar::EvCar(std::string id,VehicleType type,float price, int count,int horsepower,float battery)
:Automobile(id,type,price,count,horsepower),_battery_capacity(battery)
{
}

float EvCar::CalculateTax()
{
    return price()*0.10f;
}
