#include"Functionalities.h"

int main()
{
    Container data;

    PromiseGrade promiseGrade;
    FutureGrade futureGrade = promiseGrade.get_future();

    PromiseId promiseId;
    FutureId futureId = promiseId.get_future();

    CreateObjects(data);

    InvokingCalculateBonusForAll(data);
    
    HighestSalaryEmployeeDetails(data);

    std::future<void> employeeLocation = std::async(std::launch::async,&EmployeeLocationOfGivenGrade,std::ref(data), std::ref(futureGrade));
    promiseGrade.set_value(Grade::A);
    
    std::future<void> employeeProjectName = std::async(std::launch::async,&ProjectNameOfGivenEmployeeId,std::ref(data), std::ref(futureId));
    promiseId.set_value("101");


    return 0;
}
