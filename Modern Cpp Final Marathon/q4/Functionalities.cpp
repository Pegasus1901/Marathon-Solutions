#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace(
        std::make_pair(
            101,
            std::make_shared<Developer>(
                "101",
                "prath",
                100.0f,
                10,
                std::vector<SkillSet>{
                    SkillSet::CODE_REVIEW,
                    SkillSet::CODING})));

    data.emplace(
        std::make_pair(
            102,
            std::make_shared<Developer>(
                "102",
                "Aniket",
                100.0f,
                10,
                std::vector<SkillSet>{
                    SkillSet::CODE_REVIEW,
                    SkillSet::CODING})));
    data.emplace(
        std::make_pair(
            103,
            std::make_shared<Code_Tester>(
                "101",
                "Riya",
                100.0f,
                1,
                std::vector<SkillSet>{
                    SkillSet::CODE_REVIEW,
                    SkillSet::CODING})));
}

ExperienceContainer ExperienceAbove6(const Container &data)
{
    ExperienceContainer result;

    for(const std::pair<int,VType>& v: data){
        const VType& val= v.second;
        std::visit(
            [&](auto && var){
                if(var->experienceYears()<6){
                    result.emplace_back(val);
                }
            },val
        );
    }
    return result;

}

float AverageSalary(const Container &data)
{
    float total=0;
    for(const std::pair<int,VType>& v: data){
        const VType& val= v.second;
        std::visit(
            [&](auto && var){
                total+=var->salary();
            },val
        );
    }
    return total/data.size();
}

int SalaryCountAbove50000(const Container &data)
{
    int count=0;
    for(const std::pair<int,VType>& v: data){
        const VType& val= v.second;
        std::visit(
            [&](auto && var){
                if(var->salary()>50000){
                    count++;
                }
            },val
        );
    }

    return count;
}
