#ifndef HEADER01_H
#define HEADER01_H

class Flight{
    long int flightNumber;
    float distance;
    float fuel;
    float fare;
    static int countOfFlights;

    public:
        Flight();
        Flight(long int, float,float,float);
        ~Flight();
        void showInfo();
        void feedInfo();
        int search(int);
        int calculateFuelQuantity();
        static int calculateTotalFlightObjects();
};

#endif // HEADER01_H
