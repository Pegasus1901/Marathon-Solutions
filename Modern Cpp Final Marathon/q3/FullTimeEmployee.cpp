#include "FullTimeEmployee.h"

FullTimeEmployee::FullTimeEmployee(std::string name, std::string id, float salary, std::string projectName, std::string employeeLocation, Grade grade, int bonusPercentage)
:Employee(name, id, salary),_project_name(projectName),_employee_location(employeeLocation), _grade(grade) 
{
    if(bonusPercentage>1 && bonusPercentage<100){
        _bonus_percentage=bonusPercentage;
    }
}

float FullTimeEmployee::CalculateBonus()
{
    switch (grade())
    {
    case Grade::A:
        return bonusPercentage() * salary();
        break;
    
    case Grade::B:
        return bonusPercentage() * 0.5f * salary();
        break;
    
    case Grade::C:
        return bonusPercentage() * 0.25f * salary();
        break;
    
    default:
        break;
    }

    throw std::runtime_error("Something Went Wrong In Calculate Bonus");
}

std::ostream &operator<<(std::ostream &os, const FullTimeEmployee &rhs) {
    os << static_cast<const Employee &>(rhs)
       << " _project_name: " << rhs._project_name
       << " _employee_location: " << rhs._employee_location
       << " _grade: " << static_cast<int>(rhs._grade)
       << " _bonus_percentage: " << rhs._bonus_percentage;
    return os;
}
