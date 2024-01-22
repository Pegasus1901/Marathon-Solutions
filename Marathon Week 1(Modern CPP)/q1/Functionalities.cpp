#include "Functionalities.h"

void CreateObjects(Container &sensorsList)
{
    if (sensorsList.empty())
    {
        sensorsList.emplace_back(
            std::make_shared<Sensor>(101, "Heat", TypeofSensor::CABIN_PRESSURE, 15));
        sensorsList.emplace_back(
            std::make_shared<Sensor>(102, "Cold", TypeofSensor::TEMPRATURE, 11));
        sensorsList.emplace_back(
            std::make_shared<Sensor>(103, "Brake", TypeofSensor::TYRE_PRESSURE, 10));
        sensorsList.emplace_back(
            std::make_shared<Sensor>(104, "Normal", TypeofSensor::CABIN_PRESSURE, 13));
        sensorsList.emplace_back(
            std::make_shared<Sensor>(105, "Good", TypeofSensor::TYRE_PRESSURE, 15));
    }
    else
    {
        throw std::runtime_error("Sensors objects list not empty!!");
    }
}

bool ReadingBelow_25(const Container &sensorsList)
{
    if(sensorsList.empty()){
        throw std::runtime_error("Sensors list is empty!!!");
    }

    for (auto &Ptr : sensorsList)
    {
        if(Ptr->reading()<25){
            return true;
        }
    }
    
    return false;
}

int TotalTypeOfSensors(const Container &sensorsList, TypeofSensor type)
{
    if(sensorsList.empty()){
        throw std::runtime_error("Sensors list is empty!!!");
    }

    int count=0;
    for (auto &ptr : sensorsList)
    {
        if(ptr->type()==type){
            count++;
        }
    }
    return count;
}

std::string NameofSameIdAndType(const Container &sensorsList, int id, TypeofSensor type)
{
    if(sensorsList.empty()){
        throw std::runtime_error("Sensors list is empty!!!");
    }

    for (auto &ptr : sensorsList)
    {
        if(ptr->id()==id && ptr->type()==type){
            return ptr->name();
        }
    }

    throw std::runtime_error("No Sensor Data found with the same id and type");
}

Container ListOfContainers(const Container &sensorsList)
{
    if(sensorsList.empty()){
        throw std::runtime_error("Sensors list is empty!!!");
    }

    Container result;

    for (auto &ptr : sensorsList)
    {
        if (ptr->reading()>=15 && ptr->type()==TypeofSensor::TYRE_PRESSURE)
        {
            result.emplace_back(ptr);
        }
    }
    return result;

    if (result.empty())
    {
        throw "NONE OF THE SENSORS HAVE READING ABOVE OR EQUAL TO 15 AND TYPE OF SENSOR AS TYRE_PRESSURE";
    }
}
