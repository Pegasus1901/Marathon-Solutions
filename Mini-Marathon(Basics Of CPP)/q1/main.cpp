#include <iostream>
#include "header.h"

int main()
{
    //Class Object
    Electricity Obj;

    std::cout << "_______Electricity Bill Counter_______" << std::endl;

    //Calling Accept function for user input
    Obj.accept();

    //Displaying all values entered by user
    Obj.display();

    //Display tota bill for the month
    std::cout << "Total bill for the month is = " << Obj.calculateElectricityBill() << std::endl;

    return 0;
}
