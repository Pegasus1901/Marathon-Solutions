#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<list>
#include<memory>

#include"Sensor.h"

using Pointer= std::shared_ptr<Sensor>;

using Container= std::list<Pointer>;

//This functions creates 5 objects of Sensor type
void CreateObjects(Container& sensorsList);

//This function Returns true if all readings are below 25
bool ReadingBelow_25(const Container& sensorsList);

//This function return count of specific type passed as parameter
int TotalTypeOfSensors(const Container& sensorsList,TypeofSensor type);

//This function returns name of the given id and type of sensor
std::string NameofSameIdAndType(const Container& sensorsList, int id, TypeofSensor type);

//This function returns a container of sensors for given inputs
Container ListOfContainers(const Container& sensorsList);

#endif // FUNCTIONALITIES_H
