#include"TouristVehicle.h"
std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _type: " << static_cast<int> (rhs._type)
       << " _seat_count: " << rhs._seat_count
       << " _permit: " << *rhs._permit;
    return os;
}

TouristVehicle::TouristVehicle(std::string number, TouristVehicleType type, int seatCount, std::shared_ptr<Permit> permit)
:_number(number),_type(type),_seat_count(seatCount),_permit(permit)
{
}
