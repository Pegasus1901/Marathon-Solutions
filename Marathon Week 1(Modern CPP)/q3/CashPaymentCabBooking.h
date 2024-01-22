#ifndef CASHPAYMENTCABBOOKING_H
#define CASHPAYMENTCABBOOKING_H

#include"CabBooking.h"

class CashPaymentCabBooking:public CabBooking
{
private:
    int _reward_points_claimed;
public:
    CashPaymentCabBooking()=delete;

    float CabFareCalculation() override;

    CashPaymentCabBooking(std::string id,std::string pickup,std::string drop,float base, int rewards);

    CashPaymentCabBooking(const CashPaymentCabBooking &) = delete;

    CashPaymentCabBooking &operator=(const CashPaymentCabBooking  &) = delete;

    CashPaymentCabBooking(CashPaymentCabBooking &&) = delete;

    CashPaymentCabBooking &operator=(CashPaymentCabBooking &&) = delete;

    ~CashPaymentCabBooking()=default;

    int rewardPointsClaimed() const { return _reward_points_claimed; }
};

#endif // CASHPAYMENTCABBOOKING_H
