#include"product.h"
#include<cstring>

Product::Product(){
    productid=0;
    brand=new char[20];
    strcpy(brand,"HP");
    price=0.00;
    typeofproduct=LAPTOP;
    taxamount=0;
}

void Product::accept()
{
    int choice;
    std::cout<<"Enter Product id = "<<std::endl;
    std::cin>>productid;
    std::cout<<"Enter Product name = "<<std::endl;
    std::cin>>name;
    std::cout<<"Enter Product brand = "<<std::endl;
    std::cin>>brand;
    std::cout<<"Enter Product price = "<<std::endl;
    std::cin>>price;
    std::cout<<"Enter Product Type Of Product = \n1.Mobile \n2.Laptop \n3.TV"<<std::endl;
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        typeofproduct=MOBILEPHONE;
        break;
    case 2:
        typeofproduct=LAPTOP;
        break;
    case 3:
        typeofproduct=TV;
        break;
    default:
        std::cout<<"Invalid Type Entered Please re-enter"<<std::endl;
        break;
    }
    if(price>10000){
        taxamount=price*0.05;
    }
}
char Product::operator[](int i)
{
    try
    {
        if(i<strlen(brand)){
            return brand[i];
        }else{
            throw lengthException("Index out of bounds");
        }
    }
    catch(lengthException e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 'a';
}

bool Product::operator==(Product &pd)
{
    if(brand==pd.getbrand()){
        return true;
    }

    return false;
}
Product::~Product()
{
}
std::ostream &operator<<(std::ostream &ops, Product &p)
{
    std::cout<<"id"<<p.getProductid()<<std::endl;
    std::cout<<"id"<<p.getname()<<std::endl;
    std::cout<<"id"<<p.getbrand()<<std::endl;
    std::cout<<"id"<<p.getprice()<<std::endl;
    std::cout<<"id"<<p.gettaxamount()<<std::endl;

    return ops;
}