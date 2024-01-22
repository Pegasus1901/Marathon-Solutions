#include "Functionalities.h"

void CreateObjects(Container& cab){
    cab.emplace_back(
        std::make_shared<CashPaymentCabBooking>(
            "101",
            "Mumbai",
            "Pune",
            1000.0f,
            20
        )
    );
    cab.emplace_back(
        std::make_shared<CashPaymentCabBooking>(
            "102",
            "Chennai",
            "Pune",
            1200.0f,
            10
        )
    );
    cab.emplace_back(
        std::make_shared<CashPaymentCabBooking>(
            "103",
            "Kolkata",
            "Pune",
            1300.0f,
            30
        )
    );

    cab.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>(
            "104",
            "Banglore",
            "Pune",
            1400.0f,
            PaymentMode::CARD,
            10
        )
    );
    cab.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>(
            "105",
            "Mumbai",
            "Pune",
            1450.0f,
            PaymentMode::CARD,
            30
        )
    );
    cab.emplace_back(
        std::make_shared<OnlinePaymentCabBooking>(
            "106",
            "Banglore",
            "Delhi",
            1460.0f,
            PaymentMode::CARD,
            40
        )
    );
}

Container SamePickupLocation(const Container &cab, std::string location)
{
    Container result;

    for (auto &ptr : cab)
    {
        if (ptr->pickupLocation()==location)
        {
            result.emplace_back(ptr);
        }
    }
    return result;

    if (result.empty())
    {
        throw "NO DATA FOUND";
    }
    return Container();
}

// bool CashBookingAbove_1000(const Container &cab, int number)
// {
//     for (std::shared_ptr<CabBooking> &ptr : cab)
//     {

//     }
    
//     return false;
// }

Container NInstancesOfContainer(Container &cab,int number)
{
    if (cab.empty())
    {
        throw std::runtime_error("Cab list is empty!!!");
    }

    int count= cab.size();
    auto itr = cab.end();

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

std::string IdHighestCabFare(const Container& cab){
    std::string highest_id="";
    float highest=cab[0]->CabFareCalculation();

    for (auto &ptr : cab)
    {
        if(ptr->CabFareCalculation()>highest){
            highest=ptr->CabFareCalculation();
        }
    }
    for (auto &ptr : cab)
    {
        if(highest==ptr->CabFareCalculation()){
            highest_id= ptr->bookingId();
        }
    }

    return highest_id;
}