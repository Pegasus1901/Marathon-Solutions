#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include<iostream>
#include"TouristVehicleType.h"
#include"Permit.h"
#include<memory>

class TouristVehicle
{
private:
    std::string _number{""};
    TouristVehicleType _type{TouristVehicleType::BUS};
    int _seat_count{0};
    std::shared_ptr<Permit> _permit;
public:
    TouristVehicle()=delete;

    TouristVehicle(std::string number,TouristVehicleType type,int seatCount,std::shared_ptr<Permit> permit);

    TouristVehicle(const TouristVehicle &) = delete;

    TouristVehicle &operator=(const TouristVehicle  &) = delete;

    TouristVehicle(TouristVehicle &&) = delete;

    TouristVehicle &operator=(TouristVehicle &&) = delete;
    
    ~TouristVehicle()=default;

    std::string number() const { return _number; }

    TouristVehicleType type() const { return _type; }

    int seatCount() const { return _seat_count; }

    std::shared_ptr<Permit> permit() const { return _permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);
};

#endif // TOURISTVEHICLE_H
