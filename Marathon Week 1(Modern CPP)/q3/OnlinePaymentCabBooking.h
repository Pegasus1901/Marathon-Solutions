#ifndef ONLINEPAYMENTCABBOOKING_H
#define ONLINEPAYMENTCABBOOKING_H

#include "PaymentMode.h"
#include "CabBooking.h"

class OnlinePaymentCabBooking:public CabBooking
{
private:
    PaymentMode _payment_mode;
    int _drop_stops_count;

public:
    OnlinePaymentCabBooking()=delete;
    
    float CabFareCalculation() override;

    OnlinePaymentCabBooking(std::string id,std::string pickup,std::string drop,float base, PaymentMode mode, int stops);

    OnlinePaymentCabBooking(const OnlinePaymentCabBooking &) = delete;

    OnlinePaymentCabBooking &operator=(const OnlinePaymentCabBooking  &) = delete;

    OnlinePaymentCabBooking(OnlinePaymentCabBooking &&) = delete;

    OnlinePaymentCabBooking &operator=(OnlinePaymentCabBooking &&) = delete;

    ~OnlinePaymentCabBooking()=default;

    PaymentMode paymentMode() const { return _payment_mode; }

    int dropStopsCount() const { return _drop_stops_count; }
};

#endif // ONLINEPAYMENTCABBOOKING_H
