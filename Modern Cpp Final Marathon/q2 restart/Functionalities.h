#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<algorithm>
#include<iostream>
#include<numeric>
#include<vector>

using Container = std::vector<int>;
using FunctionContainer = std::vector<std::function<void(Container&)>>;

void OddNumbersFromContainer(const Container& data);

void DivisibleBy4 (const Container& data);

extern std::function<void(Container&)> SumOfLargestAndSecondLargest;

extern std::function<void(const Container&)> MinimumElement;

void CreatefunctionObject(FunctionContainer& fnContainer);

void Operation(FunctionContainer& fnContainer,Container& data);


#endif // FUNCTIONALITIES_H
