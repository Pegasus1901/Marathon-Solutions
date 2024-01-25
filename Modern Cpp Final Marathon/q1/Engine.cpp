#include "Engine.h"

Engine::Engine(std::string id, int power, EngineType type, float capacity, float torque)
:_engineId(id),_engineType(type),_engineCapacity(capacity)
{
    //To check negative power input for engine power
    if(power > 0){
        _horsePower=power;
    }else{
        throw std::runtime_error("Engine power cannot be negative!!");
    }

    //To check Torque value between 20 to 150
    if(torque>=20 && torque<=150){
        _engineTorque = torque;
    }else{
        throw std::runtime_error("Engine torque does not satisfy given condition!!");
    }

}