#ifndef PRODUCT_H
#define PRODUCT_H

#include<iostream>
#include<cstring>

enum ProductType{MOBILEPHONE,LAPTOP,TV};

class lengthException:public std::exception{
    char err[20];
    public:
        lengthException(const char* c){
            strcpy(err,c);
        }
        const char * what(){
            return err;
        }
};

class Product{
    
    int productid;
    std::string name;
    char* brand;
    float price;
    ProductType typeofproduct;
    float taxamount;
public:
    Product();
    void accept();
    friend std::ostream& operator<<(std::ostream&, Product&);
    char operator[] (int);
    bool operator== (Product&);
    ~Product();

        int getProductid() const { return productid; }

        std::string getname() const { return name; }

        char* getbrand() const { return brand; }

        float getprice() const { return price; }

        ProductType gettypeofproduct() const { return typeofproduct; }

        float gettaxamount() const { return taxamount; }
};

#endif // PRODUCT_H
