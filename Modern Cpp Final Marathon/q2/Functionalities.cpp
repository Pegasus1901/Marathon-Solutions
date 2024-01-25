#include "Functionalities.h"


// void OddNumbersFromContainer(const Container &data)
// {
//     if(data.empty()){
//         throw std::runtime_error("Data is empty");
//     }

//     std::cout << "Odd Numbers In Container = ";
//     for (const int& value : data)
//     {
//         if(value%2!=0){
//             std::cout<<"\t"<<value;
//         }
//     }
//     std::cout<<std::endl;

// }

// std::function<void(const Container&)> DivisibleBy4 = [] (const Container& data)
// {
//     if(data.empty()){
//         throw std::runtime_error("Data is empty");
//     }

//     int count = std::count_if(
//         data.begin(),
//         data.end(),
//         [](const int&ptr){
//             return ptr%4==0;
//         }
//     );
    
//     std::cout<<"Total Elements Divisible by 4 are = "<<count<<std::endl;
// };


// std::function<void(const Container& data)> MinimumElement= [](const Container& data){
//     if(data.empty()){
//         throw std::runtime_error("Data is empty");
//     }

//     auto minElement = std::min_element(
//         data.begin(),
//         data.end(),
//         [](const int& val1, const int& val2){
//             return  val1 < val2;
//         }
//     );

//     std::cout<<"Minimum Element is = "<< *minElement<<std::endl;
// };

std::function<void(Container&)> SumOfLargestAndSecondLargest= [](Container& data){
    if(data.empty()){
        throw std::runtime_error("Data is empty");
    }

    // int total=0;
    // Container result;
    // result=data;
    // std::sort(result.begin(),result.end());

    // total= *(result.end()-1) + *(result.end());
    
    // std::cout<<"Sum Of Largest And Second Largest Is = "<<total;
};

void CreatefunctionObject(FunctionContainer &fnContainer)
{
    fnContainer.emplace_back(
        SumOfLargestAndSecondLargest
    );
    // fnContainer.emplace_back(
    //     MinimumElement
    // );
    // fnContainer.emplace_back(
    //     DivisibleBy4
    // );

}

void Operation(FunctionContainer &fnContainer,Container &data)
{
    //functionality 1
    // OddNumbersFromContainer(data);

    for (std::function<void (const Container &)> &ptr : fnContainer)
    {
        ptr(data);
    }
}
