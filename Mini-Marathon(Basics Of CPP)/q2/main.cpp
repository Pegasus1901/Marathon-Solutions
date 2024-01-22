#include <iostream>
#include "header01.h"


//global function for search
void Find(Flight planes[], int c)
{
    if (c != 0)
    {
        int fNumber;
        std::cout << "Enter Flight Number to search = ";
        std::cin >> fNumber;
        for (int i = 0; i < c; i++)
        {
            planes[i].search(fNumber);
        }
    }
}

int main()
{
    //application start
    int total = 0;
    std::cout << "Enter total number of flights = ";
    std::cin >> total;
    Flight *flights = new Flight[total];
    int count = 0, choice = 0;

    do
    {
        //User Input Menu
        std::cout << "Select from below menu - " << std::endl;
        std::cout << "1.Enter Flight Data \n2.Display Flights Data \n3.Search \n4.Display Total Flights \n5.Exit" << std::endl;
        std::cin >> choice;

        //user choice swich cases
        switch (choice)
        {
        case 1:
            if (count >= total)
            {
                std::cout << "No more Data can be inserted..." << std::endl;
            }
            else
            {
                flights[count].feedInfo();
                count++;
            }
            break;
        case 2:
            if (count != 0)
            {
                for (int i = 0; i < count; i++)
                {
                    flights[i].showInfo();
                }
            }
            else
            {
                std::cout << "No Data Found" << std::endl;
            }
            break;
        case 3:
            if (count > 0)
            {
                Find(flights, count);
            }
            break;
        case 4:
            std::cout<<"Total Flights are = " << Flight::calculateTotalFlightObjects()<<std::endl;
            break;

        default:
            std::cout << "Enter Valid Input!!" << std::endl;
            break;
        }
    } while (1);

    //cleared memory
    delete flights;
    return 0;
}
