#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Engine.h"
#include<algorithm>
#include<array>
#include<vector>
#include<memory>

using EnginePointer = std::shared_ptr<Engine>;
using Container = std::array<EnginePointer,3>;
using EngineTypeVector = std::vector<int>;

//To create fix size container for 3 objects
void CreateObjects(Container& data);

//Function to return a container of engine Type matching criteria
std::optional<std::vector<int> >ContainerofEngineTypes(const Container& data);

//To check torque value above 110 in all objects
bool CheckEngineTorqueAbove110(const Container& data);

//Count of Container Whose value is above passed enginecapacity value
int CountOfEngineAbovePassedCapacity(const Container& data, float capacityInput);

#endif // FUNCTIONALITIES_H
