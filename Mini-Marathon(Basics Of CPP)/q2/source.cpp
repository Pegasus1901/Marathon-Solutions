#include<iostream>
#include "header01.h"


int Flight::countOfFlights=0;

//deafult constructor
Flight::Flight()
{
    flightNumber=000;
    distance=0.00;
    fuel=0.00;
    fare=0.00;
}

//parameterized constructor
Flight::Flight(long int fNo, float dist, float power, float price)
{
    flightNumber=fNo;
    distance=dist;
    fuel=power;
    fare=price;
}

//info add
void Flight::feedInfo()
{
    std::cout << "Enter Flight Number = ";
    std::cin >> flightNumber;
    std::cout << "Enter Distance = ";
    std::cin >> distance;
    std::cout << "Enter Total Fare = ";
    std::cin >> fare;
    calculateFuelQuantity();
    calculateTotalFlightObjects();
}
int Flight::search(int pNumber)
{
    if(pNumber==flightNumber){
        showInfo();
        return 1;
    }
    return 0;
    
}
Flight::~Flight(){}
int Flight::calculateFuelQuantity()
{
    if(distance<=10000){
        fuel=5000;
    }else if(distance>10000 && distance<=20000){
        fuel=11000;
    }else if(distance>20000 && distance<=30000){
        fuel=22000;
    }
    return 0;
}


void Flight::showInfo()
{
    std::cout << "Flight Number = " << flightNumber<<std::endl;
    std::cout << "Total Distance = " << distance<<std::endl;
    std::cout << "Total Fuel = " << fuel<<std::endl;
    std::cout << "Total Fare = \n" << fare<<std::endl;
}

int Flight::calculateTotalFlightObjects()
{
    countOfFlights++;
    return countOfFlights;
}
