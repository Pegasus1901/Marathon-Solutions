#include <iostream>
#include "header.h"

//Definition for Default constructor
Electricity::Electricity()
{
    sanctionLoad = 0;
    presentReading = 0;
    previousReading = 0;
}

//Definition for Accept Function
void Electricity::accept()
{
    std::cout << "Enter Present Reading = ";
    std::cin >> presentReading;
    std::cout << "Enter Previous Reading = ";
    std::cin >> previousReading;
    std::cout << "Enter Sanction Load = ";
    std::cin >> sanctionLoad;
}


//Definition for Accept Function
void Electricity::display()
{
    std::cout<<"----Summary----"<<std::endl;
    std::cout << "Present Reading = " << presentReading<<std::endl;
    std::cout << "Previous Reading = " << previousReading<<std::endl;
    std::cout << "Sanction Load = " << sanctionLoad<<std::endl;
}

//Definition for Accept Function
int Electricity::calculateElectricityBill()
{
    int consumption = presentReading - previousReading;
    int bill;
    switch (sanctionLoad)
    {
    case 1:
        slabs = E1;
        bill = (sanctionLoad * slabs) + (consumption * (slabs / 100));
        break;
    case 3:
        slabs = E2;
        bill = (sanctionLoad * slabs) + (consumption * (slabs / 100));
        break;
    case 5:
        slabs = E3;
        bill = (sanctionLoad * slabs) + (consumption * (slabs / 100));
        break;

    default:
        std::cout<<"Please Enter Correct Input"<<std::endl;
        break;
    }
    return bill;
}


//All getters and setters
int Electricity::getSanctionLoad() const
{
    return 0;
}

void Electricity::setSanctionLoad(int sanctionLoad_)
{
}

ElectricitySlabs Electricity::getSlabs() const
{
    return ElectricitySlabs();
}

void Electricity::setSlabs(const ElectricitySlabs &slabs_)
{
}

long int Electricity::getPresentReading() const
{
    return 0;
}

void Electricity::setPresentReading(long int presentReading_)
{
}

long int Electricity::getPreviousReading() const
{
    return 0;
}

void Electricity::setPreviousReading(long int previousReading_)
{
}

Electricity::~Electricity()
{
}
