#include "Functionalities.h"

int main()
{
    Container sensorList;
    try
    {
        CreateObjects(sensorList);

        //Printing created list objects
        for (const Pointer& ptr : sensorList)
        {
            std::cout<<*ptr<<'\n';
        }

        //Checking Sensors
        if (ReadingBelow_25(sensorList)){

            std::cout << "Readings are below 25"<<"\n";
        }else{

            std::cout << "Readings are not 25"<<"\n";
        }

        //Same type of sensors function
        std::cout<<"Total Type of sensors of given type are = "<<TotalTypeOfSensors(sensorList,TypeofSensor::TEMPRATURE)<<"\n";

        std::cout<<NameofSameIdAndType(sensorList,103,TypeofSensor::TEMPRATURE)<<"\n";

        Container SpecialSensorsCategoery = ListOfContainers(sensorList);

    }
    catch (const std::runtime_error &e)
    {
        std::cout << e.what() << '\n';
    }

    return 0;
}
