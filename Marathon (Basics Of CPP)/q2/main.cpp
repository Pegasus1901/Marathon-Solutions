#include<iostream>
#include "conversion.h"

int main(){
    Conversion c1;

    Conversion c3(c1);

    int array[]={1,2,3,4,5};
    Conversion c2(10,10,array);

    10+c2;
    c2.display();

    if(c1==c2){
        std::cout<<"Object matched"<<std::endl;
    }else{
        std::cout<<"Object not matched"<<std::endl;
    }

    std::cout<<"Average of the Array is = "<<c2[2]<<std::endl;

    return 0;
}