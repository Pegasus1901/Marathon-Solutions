#ifndef EVCAR_H
#define EVCAR_H
#include"Automobile.h"

class EvCar:public Automobile
{
private:
    float _battery_capacity;
public:
    EvCar(std::string id,VehicleType type,float price, int count,int horsepower,float battery);
    ~EvCar()=default;
    float CalculateTax();
    EvCar()=delete;
    EvCar(const EvCar&)=delete;
    EvCar(EvCar&&)=delete;
    EvCar operator=(const EvCar&)=delete;
    EvCar operator=(EvCar&&)=delete;
};

#endif // EVCAR_H
