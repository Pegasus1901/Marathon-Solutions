#include "OnlinePaymentCabBooking.h"

float OnlinePaymentCabBooking::CabFareCalculation()
{
    if(baseFare()){
        throw std::runtime_error("BASE FARE IS ZERO!!");
    }

    float finalFare=baseFare();

    if(paymentMode()==PaymentMode::CARD || paymentMode()==PaymentMode::UPI){
        finalFare= baseFare()* dropStopsCount();
    }

    if(paymentMode()==PaymentMode::ONLINE_WALLET){
        finalFare=baseFare()+(baseFare()*0.10);
    }

    return finalFare;
}

OnlinePaymentCabBooking::OnlinePaymentCabBooking(std::string id, std::string pickup, std::string drop, float base, PaymentMode mode, int stops)
:CabBooking(id,pickup,drop,base),_payment_mode(mode),_drop_stops_count(stops)
{}
