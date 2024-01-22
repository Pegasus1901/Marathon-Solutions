#include<iostream>
#include "bill.h"

Bill::Bill()
{
    billnumber=0;
    billamount=0;
    // std::cout<<"Bill Constructor"<<std::endl;
}

void Bill::accept()
{
    int amount,number;
    customerinfo.accept();
    billdate.accept();
    std::cout<<"Enter Bill Number = "<<std::endl;
    std::cin>>number;
    std::cout<<"Enter Bill Amount = "<<std::endl;
    std::cin>>amount;
    setBillnumber(number);
    setBillamount(amount);
}

Bill::~Bill()
{
}

void Bill::display(){
    std::cout<<customerinfo;
    std::cout<<billdate;
    
}
std::ostream &operator<<(std::ostream &opStream, Bill &b)
{
    b.display();
    std::cout<<"Bill Number = "<<b.getBillnumber()<<std::endl;
    std::cout<<"Bill Amount = "<<b.getBillamount()<<std::endl;
    return opStream;
}
