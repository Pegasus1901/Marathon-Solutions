#include"Functionalities.h"

int main()
{
    Container EngineData;
    
    CreateObjects(EngineData);

    bool torqueabove110 = CheckEngineTorqueAbove110(EngineData);

    if(torqueabove110){
        std::cout<<"\nAll engines have Torque above 110 !!";
    }else{
        std::cout<<"\nAll engines Do Not have Torque above 110 !!";
    }

    auto EngineContainerFunction = ContainerofEngineTypes(EngineData);

    if(EngineContainerFunction.has_value()){
        for (int &ptr : EngineContainerFunction.value())
        {
            switch (ptr)
            {
            case 0:
                std::cout<<"\nEngine Type is PETROL";
                break;
            case 1:
                std::cout<<"\nEngine Type is DIESEL";
                break;
            case 2:
                std::cout<<"\nEngine Type is HYBRID";
                break;
            
            default:
                break;
            }
        }
    }

    std::cout<<"\nEngines Which have Capacity above Given Input = " << CountOfEngineAbovePassedCapacity(EngineData,100.0f)<<"\n";
    

    return 0;
}
