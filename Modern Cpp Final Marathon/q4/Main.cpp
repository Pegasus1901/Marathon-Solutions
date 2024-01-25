#include "Functionalities.h"

int main()
{
    Container data;

    CreateObjects(data);

    ExperienceContainer experience_result_container = ExperienceAbove6(data);

    for (auto &ptr : experience_result_container)
    {
        std::visit(
            [](auto &&val)
            {
                std::cout << *val << "\n";
            },
            ptr);
    }

    std::cout << "Avg Salary " << AverageSalary(data)<<std::endl;

    std::cout<< SalaryCountAbove50000(data)<<" Have salary above 50000"<<std::endl;

    return 0;
}
