#ifndef ENGINE_H
#define ENGINE_H

#include<iostream>
#include"EngineType.h"

class Engine{
private:
    std::string _engineId;
    int _horsePower;
    EngineType _engineType;
    float _engineCapacity;
    float _engineTorque;
public:

   Engine(std::string id, int power, EngineType type, float capacity, float torque);

   Engine()=delete;
   
   Engine operator=(Engine&&)=delete;
   
   Engine(const Engine&)=delete;
   
   Engine(Engine&&)=delete;
   
   Engine operator=(const Engine&)=delete;
   
   ~Engine()=default;

   //Getters for data members
   std::string engineId() const { return _engineId; }

   int horsePower() const { return _horsePower; }

   EngineType engineType() const { return _engineType; }

   float engineCapacity() const { return _engineCapacity; }

   float engineTorque() const { return _engineTorque; }
};

#endif // ENGINE_H
