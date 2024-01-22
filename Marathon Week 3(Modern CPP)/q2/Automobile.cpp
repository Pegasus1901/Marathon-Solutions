#include "Automobile.h"

Automobile::Automobile(std::string id, VehicleType type, float price, int count, int horsepower)
:_id(id),_type(type),_price(price),_seat_count(count),_engine_horsepower(horsepower)
{
}

float Automobile::CalculateGST()
{
    return price()*0.18;
}
