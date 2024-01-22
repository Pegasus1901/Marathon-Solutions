#ifndef CABBOOKING_H
#define CABBOOKING_H

#include<iostream>


class CabBooking
{
private:
    std::string _booking_id;
    std::string _pickup_location;
    std::string _drop_location;
    float _base_fare{1000.0f};
public:
    CabBooking()=delete;

    virtual float CabFareCalculation() = 0;

    CabBooking(std::string id,std::string pickup,std::string drop,float base);

    CabBooking(const CabBooking &) = delete;

    CabBooking &operator=(const CabBooking  &) = delete;

    CabBooking(CabBooking &&) = delete;

    CabBooking &operator=(CabBooking &&) = delete;
    
    ~CabBooking()=default;

    std::string bookingId() const { return _booking_id; }

    std::string pickupLocation() const { return _pickup_location; }

    float baseFare() const { return _base_fare; }
};

#endif // CABBOOKING_H
