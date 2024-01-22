#include"Functionalities.h"

int main()
{
    Container data;
    std::thread start(&CreateObjects,std::ref(data));
    start.join();

    std::promise<std::string> id;
    std::future<std::string> fut = id.get_future();

    
    id.set_value("101");
    auto searchById = std::async(std::launch::async ,&DisplaySeatCount,std::ref(data),std::ref(fut));
    std::cout<<"\nTotal Seat Count for given ID = "<<searchById.get()<<std::endl;

    auto hpLessThan600 = std::async(std::launch::async ,&NoOfAutomobileHPLessThan600,std::ref(data));
    std::cout<<"\nNumber of automobiles having HP less than 600 = "<<hpLessThan600.get()<<std::endl;

    auto avgPrice = std::async(std::launch::async,&AvgPriceOfAutomobiles,std::ref(data));
    std::cout<<"\nAverage Price of Automobiles = "<<avgPrice.get()<<std::endl;

    auto sumOfGST= std::async(std::launch::async,&SumOfAllProductsGST,std::ref(data));
    std::cout<<"Total Sum Of GST = "<<avgPrice.get()<<std::endl;


    return 0;
}
