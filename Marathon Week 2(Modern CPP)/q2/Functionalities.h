#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<memory>
#include<vector>
#include<functional>

#include"Product.h"

using ArrayType = std::array<int,2>;


using ProductPointer = std::shared_ptr<Product>;
using ProductContainer= std::vector<ProductPointer>;

void CreateProductList(ProductContainer& data);

void PrintDetails(ProductContainer& data);

extern std::function<float(ProductContainer& data)> AverageProductPrice;

extern std::function<float(ProductContainer& data)> TaxOnExpensiveProduct;

extern std::function<ProductContainer(ProductContainer& data)> LastNInstancesOfProduct;

extern std::function<ProductContainer(ProductContainer& data)> UniqueProductBrands;

extern std::function<ArrayType(ProductContainer& data)> ProductTypeAndOriginInValues;

extern std::function<ProductContainer(ProductContainer& data,std::string name)> AddressOfGivenProductBrandName;


#endif // FUNCTIONALITIES_H
