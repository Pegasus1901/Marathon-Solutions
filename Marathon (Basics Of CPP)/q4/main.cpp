#include<iostream>
#include"product.h"
#include <cstring>

bool searchproductbytype(Product p[],ProductType t){
    for (int i = 0; i < 2; i++)
    {
        if(p[i].gettypeofproduct()==t){
            std::cout<<p[i];
            break;
        }
    }
    return true;
    
}

bool searchproductbybrand(Product p[],const char* b ){
    for (int i = 0; i < 2; i++)
    {
        if(strcmp(p[i].getbrand(),b)){
            std::cout<<p[i];
            break;
        }
    }
    return true;
}

bool searchproductbyid(Product p[],int li ){
    for (int i = 0; i < 2; i++)
    {
        if(p[i].getProductid()==li){
            std::cout<<p[i];
            break;
        }
    }
    return true;
}

void displayproductwithhighestprice(Product p[]){
    int max=p[0].getprice();
    for (int i = 1; i < 2; i++)
    {
        if(p[i].getprice()>max){
            std::cout<<p[i];
        }
    }
}

float calculateaverageprice(Product p[]){
    float avg;
    int sum;
    for (int i = 0; i < 2; i++)
    {
        sum+=p[i].getprice();
    }
    avg=sum/2;
    return avg;
}

float calculateTotaltaxamount(Product p[]){
    int sum;
    for (int i = 0; i < 2; i++)
    {
        sum+=p[i].gettaxamount();
    }
    return sum;
}

int main(){

    Product *ps=new Product[3];

    for (int i = 0; i < 2; i++)
    {
        ps[i].accept();
    }

    searchproductbytype(ps,LAPTOP);

    searchproductbybrand(ps,"lenovo");

    searchproductbyid(ps,1);

    displayproductwithhighestprice(ps);

    calculateaverageprice(ps);

    calculateTotaltaxamount(ps);

    Product p;
    
    return 0;
}