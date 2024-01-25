#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Developer.h"
#include"Code_Tester.h"

#include<variant>
#include<unordered_map>
#include<memory>

using DeveloperPointer = std::shared_ptr<Developer>;
using Code_TesterPointer= std::shared_ptr<Code_Tester>;

using VType = std::variant<DeveloperPointer,Code_TesterPointer>;
using Container = std::unordered_map<int,VType>;

using ExperienceContainer = std::vector<VType>;

void CreateObjects(Container& data);

ExperienceContainer ExperienceAbove6(const Container& data);

float AverageSalary(const Container& data);

int SalaryCountAbove50000(const Container& data);

#endif // FUNCTIONALITIES_H
