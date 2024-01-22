#include "inventory.h"

Inventory::Inventory()
{
    balanceStock = 50;
    description_of_product = "Empty";
    productCode = 0;
}
void Inventory::accept()
{
    int code, bal;
    std::string des;
    std::cout << "Enter Product code = " << std::endl;
    std::cin >> code;
    productCode = code;
    std::cout << "Enter Product Stock = " << std::endl;
    std::cin >> bal;
    if (bal < 20)
    {
        std::cout << "Stock size cannot be less than 20 " << std::endl;
    }else
    {
        balanceStock = bal;
    }

    std::cout << "Enter Product Description = " << std::endl;
    std::cin >> des;
    description_of_product = des;
}

void Inventory::purchase(int quantity)
{
    std::cout << "Total Stock After Purchase = " << balanceStock + quantity << std::endl;
}

void Inventory::sale(int size)
{
    if (balanceStock - size < 20)
    {
        std::cout << "Cannot Sale....Remaining Size Cannot be less than 20" << std::endl;
    }
    else
    {
        std::cout << "Total Stock Remaining = " << getBalanceStock() << std::endl;
    }
}

void Inventory::display()
{
    std::cout << "Product ID = " << productCode << std::endl;
    std::cout << "Total Product Stock Size = " << getBalanceStock() << std::endl;
    std::cout << "Product Description = " << descriptionOfProduct() << std::endl;
}

// all getters and setters
std::string Inventory::descriptionOfProduct() const { return description_of_product; }
void Inventory::setDescriptionOfProduct(const std::string &descriptionOfProduct) { description_of_product = descriptionOfProduct; }

int Inventory::getBalanceStock() const { return balanceStock; }
void Inventory::setBalanceStock(int balanceStock_) { balanceStock = balanceStock_; }

int Inventory::getProductCode() const
{
    return productCode;
}

void Inventory::setProductCode(int productCode_)
{
}

Inventory::~Inventory()
{
}

std::ostream &operator<<(std::ostream &os, Inventory &i)
{
    i.display();
    return os;
}
