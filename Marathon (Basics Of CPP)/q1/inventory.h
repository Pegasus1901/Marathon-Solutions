#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>

// class inventory
class Inventory
{
    std::string description_of_product;
    int balanceStock;
    int productCode;

    // member functions
    public:

    // default constructor
    Inventory();
    void accept();

    // parameterized constructor
    Inventory(std::string desc, int stock, int code) : description_of_product(desc), productCode(code)
    {
        if (stock < 20)
        {
            std::cout << "Object cannot be created due to stock size less than 20" << std::endl;
        }
        else
        {
            balanceStock = stock;
        }
    }

    void purchase(int);
    void sale(int);
    void display();

    friend std::ostream &operator<<(std::ostream &, Inventory &);

    std::string descriptionOfProduct() const;
    void setDescriptionOfProduct(const std::string &descriptionOfProduct);

    int getBalanceStock() const;
    void setBalanceStock(int balanceStock_);

    int getProductCode() const;
    void setProductCode(int productCode_);

    // destructor
    ~Inventory();
};

#endif // INVENTORY_H
