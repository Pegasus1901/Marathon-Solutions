#include"Functionalities.h"

int main()
{
    PassContainer PassData;
    TicketContainer TicketData;

    std::thread start(&CreateObject,std::ref(PassData),std::ref(TicketData));
    start.join();

    std::promise<std::string> promiseId;
    std::future<std::string> futureId = promiseId.get_future();

    promiseId.set_value("101");
    std::cout<<"Data of Future id passed to fn"<<std::endl;
    auto displayIdDetails = std::async(std::launch::async,&DisplayIdMatchingPassengers,std::ref(PassData),std::ref(futureId));
    std::cout<<std::endl;

    std::vector<std::string> IdVector{"101"};
    auto AvgAgeOfGivenId = std::async(std::launch::async,&AvgAgeOfPassedValues,std::ref(PassData),std::ref(IdVector));
    std::cout<<"\nAverage Age Of Given Id As Input Is = "<<AvgAgeOfGivenId.get()<<std::endl;

    return 0;
}
