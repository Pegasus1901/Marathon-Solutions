#include "CashPaymentCabBooking.h"

float CashPaymentCabBooking::CabFareCalculation()
{
    if(baseFare()){
        throw std::runtime_error("BASE FARE IS ZERO!!");
    }

    float finalFare= baseFare();

    if(rewardPointsClaimed()<(baseFare()*0.25)){
        finalFare=baseFare()*2;
    }

    if(rewardPointsClaimed()>=0.25*baseFare()){
        finalFare= 1.5*baseFare();
    }

    return finalFare;
}

CashPaymentCabBooking::CashPaymentCabBooking(std::string id, std::string pickup, std::string drop, float base, int rewards)
:CabBooking(id,pickup,drop,base),_reward_points_claimed(rewards)
{
}
