#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<algorithm>
#include<future>
#include<memory>
#include<list>

#include"FullTimeEmployee.h"


using Pointer = std::shared_ptr<FullTimeEmployee>;
using Container = std::list<Pointer>;

using PromiseGrade = std::promise<Grade>;
using FutureGrade = std::future<Grade>;

using PromiseId = std::promise<std::string>;
using FutureId = std::future<std::string>;

void CreateObjects(Container& data);

void InvokingCalculateBonusForAll(const Container& data);

void HighestSalaryEmployeeDetails(const Container& data);

void EmployeeLocationOfGivenGrade(const Container& data, std::future<Grade>& futureGrade);

void ProjectNameOfGivenEmployeeId(const Container& data, std::future<std::string>& futureId);

#endif // FUNCTIONALITIES_H
