#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<memory>
#include<vector>
#include<future>
#include<algorithm>
#include"EvCar.h"

using Pointer = std::shared_ptr<Automobile>;
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

int DisplaySeatCount(const Container& data, std::future<std::string>& id);

int NoOfAutomobileHPLessThan600(const Container& data);

float AvgPriceOfAutomobiles(const Container& data);

float SumOfAllProductsGST(const Container& data);

#endif // FUNCTIONALITIES_H
