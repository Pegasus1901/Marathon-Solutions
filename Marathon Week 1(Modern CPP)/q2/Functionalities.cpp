#include "Functionalities.h"

void CreateObjects(Container &vehicles)
{
    if (vehicles.empty())
    {
        vehicles.emplace_back(
            std::make_shared<TouristVehicle>("101", TouristVehicleType::BIKE, 2, std::make_shared<Permit>("1011", TypeOfPermit::LEASE, 10, 100.0f)));
        vehicles.emplace_back(
            std::make_shared<TouristVehicle>("102", TouristVehicleType::BUS, 20, std::make_shared<Permit>("1012", TypeOfPermit::LEASE, 10, 300.0f)));
        vehicles.emplace_back(
            std::make_shared<TouristVehicle>("103", TouristVehicleType::CAB, 8, std::make_shared<Permit>("1013", TypeOfPermit::LEASE, 10, 850.0f)));
    }
    else
    {
        throw std::runtime_error("Vehicles objects list not empty!!");
    }
}

Container ListOfContainers(const Container &vehicles)
{
    if (vehicles.empty())
    {
        throw std::runtime_error("Vehicles list is empty!!!");
    }

    Container result;

    for (auto &ptr : vehicles)
    {
        if (ptr->seatCount() >= 4 && ptr->permit()->permitType() == TypeOfPermit::LEASE)
        {
            result.emplace_back(ptr);
        }
    }
    return result;

    if (result.empty())
    {
        throw "NONE OF THE VEHICLES HAVE READING ABOVE OR EQUAL TO 15 AND TYPE OF SENSOR AS TYRE_PRESSURE";
    }
}

float AvgPermitDurationCAB(const Container &vehicles)
{
    if (vehicles.empty())
    {
        throw std::runtime_error("Vehicles list is empty!!!");
    }
    // temporary variables
    float sum = 0, count = 0;

    for (auto &ptr : vehicles)
    {
        if (ptr->type() == TouristVehicleType::CAB)
        {
            sum += ptr->permit()->permitDurationLeft();
            count++;
        }
    }

    float avg = sum / count;
    if (avg)
    {
        return avg;
    }

    throw std::runtime_error("AVERAGE PRICE IS ZERO");
}

TypeOfPermit MinimumBookingCharge(Container &vehicles)
{

    if (vehicles.empty())
    {
        throw std::runtime_error("Vehicles list is empty!!!");
    }

    float charge = vehicles.front()->permit()->permitRenewalCharge();

    for (auto &ptr : vehicles)
    {
        if (ptr->permit()->permitRenewalCharge() < charge)
        {
            charge = ptr->permit()->permitRenewalCharge();
        }
    }

    for (auto &ptr : vehicles)
    {
        if (charge == ptr->permit()->permitRenewalCharge())
        {
            return ptr->permit()->permitType();
        }
    }

    throw std::runtime_error("ERROR IN FINDING MINIMUM BOOKING CHARGE");
}

Container LastNObjects(const Container &vehicles, int number)
{

    if (vehicles.empty())
    {
        throw std::runtime_error("Vehicles list is empty!!!");
    }

    int count= vehicles.size();
    auto itr = vehicles.end();

    Container result;

    while (count >= number)
    {
        itr--;
        count --;
        result.emplace_back(itr);
    }
    if (result.empty())
    {
        throw std::runtime_error("RESULT IS EMPTY");
    }
    return result;
}