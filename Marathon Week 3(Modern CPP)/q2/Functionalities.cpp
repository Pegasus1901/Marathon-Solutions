#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<Automobile>(
            "101",
            VehicleType::REGULAR,
            30000.0f,
            5,
            750
        )
    );
    data.emplace_back(
        std::make_shared<Automobile>(
            "102",
            VehicleType::TRANSPORT,
            55000.0f,
            2,
            800
        )
    );
    data.emplace_back(
        std::make_shared<Automobile>(
            "103",
            VehicleType::REGULAR,
            20000.0f,
            5,
            500
        )
    );
    data.emplace_back(
        std::make_shared<EvCar>(
            "104",
            VehicleType::TRANSPORT,
            22000.0f,
            6,
            600,
            9000.0f
        )
    );
    data.emplace_back(
        std::make_shared<EvCar>(
            "105",
            VehicleType::REGULAR,
            10000.0f,
            3,
            200,
            5000.0f
        )
    );
}

int DisplaySeatCount(const Container &data, std::future<std::string> &id)
{
    std::string searchId = id.get();
    auto p = std::find_if(
        data.begin(),
        data.end(),
        [&](const Pointer& ptr){
            return (ptr->id() == searchId);
        }
    );

    return p->get()->seatCount();
    
}

int NoOfAutomobileHPLessThan600(const Container &data)
{
    int count = std::count_if(
        data.begin(),
        data.end(),
        [](const Pointer& ptr){
            return ptr->engineHorsepower() < 600;
        }
    );

    return count;
}

float AvgPriceOfAutomobiles(const Container &data)
{
    int total=0;
    for (const Pointer& ptr : data)
    {
        total+=ptr->price();
    }
    return total/data.size();
}

float SumOfAllProductsGST(const Container &data)
{
    int totalGst=0;

    for (const Pointer& ptr : data)
    {
        totalGst+= ptr->CalculateGST();
    }
    return totalGst;
}
