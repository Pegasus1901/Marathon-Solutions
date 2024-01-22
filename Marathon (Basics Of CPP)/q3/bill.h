#include<iostream>
#include"customer.h"
#include"date.h"

class Bill
{
private:
    int billnumber;
    Customer customerinfo;
    Date billdate;
    int billamount;
public:
    Bill();
    void accept();
    void display();
    friend std::ostream& operator<<(std::ostream&, Bill&);
    ~Bill();

    int getBillnumber() const { return billnumber; }
    void setBillnumber(int billnumber_) { billnumber = billnumber_; }

    int getBillamount() const { return billamount; }
    void setBillamount(int billamount_) { billamount = billamount_; }

    char* getCustomerinfo() { return customerinfo.getCustomername(); }
    void setCustomerinfo(const Customer &customerinfo_) { customerinfo = customerinfo_; }
};