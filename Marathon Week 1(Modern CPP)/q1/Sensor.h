#ifndef SENSOR_H
#define SENSOR_H

#include <iostream>

#include"TypeOfSensor.h"

class Sensor
{
private:
    int _id{0};
    std::string _name{""};
    TypeofSensor _type{TypeofSensor::TEMPRATURE};
    int _reading{1};
public:
    Sensor();

    Sensor(int id, std::string name,TypeofSensor type,int reading);

    Sensor(const Sensor &) = delete;

    Sensor &operator=(const Sensor  &) = delete;

    Sensor(Sensor &&) = delete;

    Sensor &operator=(Sensor &&) = delete;

    int id() const { return _id; }

    std::string name() const { return _name; }

    TypeofSensor type() const { return _type; }

    int reading() const { return _reading; }

    friend std::ostream &operator<<(std::ostream &os, const Sensor &rhs);
    
    ~Sensor()=default;
};

#endif // SENSOR_H
