#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
        std::make_shared<FullTimeEmployee>(
            "Prathmesh",
            "101",
            2000.0f,
            "Pegasus",
            "Pune",
            Grade::A,
            90
        )
    );

    data.emplace_back(
        std::make_shared<FullTimeEmployee>(
            "Aniket",
            "102",
            1500.0f,
            "Pegasus",
            "Delhi",
            Grade::B,
            50
        )
    );

    data.emplace_back(
        std::make_shared<FullTimeEmployee>(
            "Jatin",
            "103",
            1000.0f,
            "Pegasus",
            "Mumbai",
            Grade::C,
            40
        )
    );
}

void InvokingCalculateBonusForAll(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("Empty Data");
    }

    for (const Pointer& ptr : data)
    {
        std::cout<<"Total Bonus for " << ptr->name() <<" is "<< ptr->CalculateBonus()<<std::endl;
    }
    
}

void HighestSalaryEmployeeDetails(const Container &data)
{
    if (data.empty()){
        throw std::runtime_error("Empty Data");
    }

    auto itr = std::max_element(
        data.begin(),
        data.end(),
        [](const Pointer& ptr1, const Pointer ptr2){
            return ptr1->salary() < ptr2->salary();
        }
    );
    std::cout<<"Max salary Employee is: "<<*itr->get()<<std::endl;
    
}

void EmployeeLocationOfGivenGrade(const Container &data, std::future<Grade> &futureGrade)
{
    if (data.empty()){
        throw std::runtime_error("Empty Data");
    }
    std::shared_ptr<FullTimeEmployee> fTEPointer ;

    for (const Pointer& ptr : data)
    {

        if(ptr->grade()==futureGrade.get()){
            std::cout<<"\nLocation Of Employee With Given Grade Is "<<ptr->employeeLocation()<< std::endl;
        }
    }
}

void ProjectNameOfGivenEmployeeId(const Container &data, std::future<std::string> &futureId)
{
    if (data.empty()){
        throw std::runtime_error("Empty Data");
    }

    // auto projectPointer = std::find_if(
    //     data.begin(),
    //     data.end(),
    //     [&](const Pointer& ptr){
    //         return ptr->id() == futureId.get();
    //     }
    // );
    
    for (const Pointer&ptr : data)
    {
        if(ptr->id()==futureId.get()){
            std::cout<<"Project Name Of Given Id Is = "<< ptr->projectName()<<std::endl;
        }
    }
    

}
