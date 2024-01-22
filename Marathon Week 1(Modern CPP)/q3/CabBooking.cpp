#include "CabBooking.h"

CabBooking::CabBooking(std::string id, std::string pickup, std::string drop, float base)
:_booking_id(id),_pickup_location(pickup),_drop_location(drop),_base_fare(base)
{}