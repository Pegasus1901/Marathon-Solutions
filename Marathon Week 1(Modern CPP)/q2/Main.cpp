#include <iostream>
#include "Functionalities.h"

int main()
{
    try
    {
        Container tVehicles;

        CreateObjects(tVehicles);

        LastNObjects(tVehicles, 2);

        TypeOfPermit permitOfGivenType = MinimumBookingCharge(tVehicles);
        std::cout << "Type of Permit = " << static_cast<int>(permitOfGivenType) << "\n";

        std::cout << "Average Permit Duration Of Type CAB = " << AvgPermitDurationCAB(tVehicles) << "\n";
    }
    catch (const std::runtime_error &e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}
