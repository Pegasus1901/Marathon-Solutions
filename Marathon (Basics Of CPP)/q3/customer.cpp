#include "customer.h"
#include<cstring>

Customer::Customer()
{
    customername=new char[20];
    strcpy(customername,"Empty");
    // std::cout<<"Customer Constructor"<<std::endl;
}

Customer::Customer(const char *name)
{
    strcpy(customername,name);
}

Customer::Customer(Customer &n)
{
    strcpy(customername,n.customername);
}

void Customer::accept(){
    char name[20];
    std::cout<<"Enter customer name = "<<std::endl;
    std::cin>>name;

    try
    {
        if(strlen(name)<20){
            strcpy(customername,name);
        }else{
            throw lengthException("Name length more than 20 chars");
        }
    }
    catch(lengthException e)
    {
        std::cout<<e.what();
    }
    
}

Customer::~Customer()
{
}

std::ostream &operator<<(std::ostream &os, Customer &cs)
{
    std::cout<<"Customer Name = "<<cs.getCustomername()<<std::endl;
    return os;
}
