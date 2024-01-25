#include "Code_Tester.h"

Code_Tester::Code_Tester(std::string id, std::string name, float salary, int experienceYears, std::vector<SkillSet> skill)
    : _id(id), _name(name), _salary(salary), _experience_years(experienceYears), _skill(skill)
{
}

float Code_Tester::CalculateBonus()
{
    if (experienceYears() < 5)
    {
        return 0.05f * salary();
    }
    else if (experienceYears() > 5)
    {
        return 0.10f * salary();
    }

    throw std::runtime_error("Cannot Calculate Bonus!!");
}

std::ostream &operator<<(std::ostream &os, const Code_Tester &rhs) {
    os << "_id: " << rhs._id
       << " _name: " << rhs._name
       << " _salary: " << rhs._salary
       << " _experience_years: " << rhs._experience_years;
    return os;
}
