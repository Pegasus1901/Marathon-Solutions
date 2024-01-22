#include "Functionalities.h"

void CreateObject(PassContainer &PassData, TicketContainer &TicketData)
{
    TicketData.emplace_back(
        std::make_shared<Ticket>(
        30.0f,
        TicketType::GENERAL
        )
    );
    TicketData.emplace_back(
        std::make_shared<Ticket>(
        50.0f,
        TicketType::RESERVED
        )
    );

    PassData.emplace_back(
        std::make_shared<Passenger>(
            "101",
            "Prathmesh",
            23,
            TicketData[0],
            200.0f
        )
    );

    PassData.emplace_back(
        std::make_shared<Passenger>(
            "102",
            "Aniket",
            24,
            TicketData[1],
            400.0f
        )
    );
}

void DisplayIdMatchingPassengers(const PassContainer& PassData, std::future<std::string> &id)
{
    if(PassData.empty()){
        throw std::runtime_error("Empty Data");
    }
    auto p = std::find_if(
        PassData.begin(),
        PassData.end(),
        [&](const PassPointer& ptr){
            return ptr->id() == id.get();
        }
    );
    std::cout<<*p->get()<<std::endl;
}

int AvgAgeOfPassedValues(const PassContainer &PassData, std::vector<std::string> &ids)
{
    //avg age of all customers in passed data
    if(PassData.empty()){
        throw std::runtime_error("Empty Data");
    }

    int total=0;
    for (const PassPointer& ptr : PassData)
    {
        for (std::string& idString : ids)
        {
            if(ptr->id()==idString){
                total+=ptr->age();
            }
        }
        
    }
    return total;
}
