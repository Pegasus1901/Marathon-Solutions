#ifndef CONVERSION_H
#define CONVERSION_H

#include<iostream>

class Conversion{
    float xDistance;
    float yDistance;
    int arr[5];

    public:
        Conversion();
        Conversion(Conversion&);
        Conversion(float,float,int*);
        friend Conversion operator+(int, Conversion&);
        Conversion operator+(int);
        Conversion operator ++();
        Conversion operator++(int);
        Conversion operator--();
        Conversion operator--(int);
        float operator[] (int);
        bool operator== (Conversion&);
        float operator() (Conversion&);
        void display();

        ~Conversion();


        float getXDistance() const { return xDistance; }
        void setXDistance(float xDistance_) { xDistance = xDistance_; }

        float getYDistance() const { return yDistance; }
        void setYDistance(float yDistance_) { yDistance = yDistance_; }
};

#endif // CONVERSION_H
