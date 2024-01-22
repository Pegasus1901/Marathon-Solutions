#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include<iostream>
#include"VehicleType.h"

class Automobile
{
private:
    std::string _id;
    VehicleType _type;
    float _price;
    int _seat_count;
    int _engine_horsepower;

public:
    Automobile(std::string id,VehicleType type,float price, int count,int horsepower);//PC
    virtual float CalculateGST();
    ~Automobile()=default;
    Automobile()=default;
    Automobile(const Automobile&)=delete;
    Automobile(Automobile&&)=delete;
    Automobile operator=(const Automobile&)=delete;
    Automobile operator=(Automobile&&)=delete;

    std::string id() const { return _id; }

    VehicleType type() const { return _type; }

    float price() const { return _price; }

    int seatCount() const { return _seat_count; }

    int engineHorsepower() const { return _engine_horsepower; }
};

#endif // AUTOMOBILE_H
