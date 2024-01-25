#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data[0]= std::make_shared<Engine>(
        "101",
        200,
        EngineType::HYBRID,
        500.0f,
        120.0f
    );

    data[1]= std::make_shared<Engine>(
        "102",
        1500,
        EngineType::PETROL,
        1.0f,
        150.0f
    );

    data[2]= std::make_shared<Engine>(
        "103",
        100,
        EngineType::DIESEL,
        80.0f,
        100.0f
    );
}

std::optional<std::vector<int>> ContainerofEngineTypes(const Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    EngineTypeVector enginetypeVector;

    for (const auto& ptr : data)
    {
        if(ptr->horsePower()>1000 && ptr->engineCapacity()<2.0f){
            enginetypeVector.emplace_back(static_cast<int>(ptr->engineType()));
        }
    }

    if(enginetypeVector.empty()){
        throw std::runtime_error("No data Found For EngineType In Container");
    }
    
    return enginetypeVector;
}

bool CheckEngineTorqueAbove110(const Container &data)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }
    
    auto enginePtr = std::all_of(
        data.begin(),
        data.end(),
        [&](const EnginePointer& ptr){
            return ptr.get()->engineTorque() > 110;
        }
    );

    return enginePtr;
}

int CountOfEngineAbovePassedCapacity(const Container &data, float capacityInput)
{
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }
    
    int count = std::count_if(
        data.begin(),
        data.end(),
        [&](const EnginePointer&ptr){
            return ptr->engineCapacity()>capacityInput;
        }
    );
    
    if(count==0){
        throw std::runtime_error("No engine has capacity above given value.");
    }

    return count;
}
