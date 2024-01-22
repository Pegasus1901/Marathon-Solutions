#include<iostream>
#include"header02.h"
int main(){
    //default working
    Student s1;

    //parameterized working
    int m[3]={10,20,30};
    Student s2(1,"Aniket",m);

    //copy constructor
    Student s3(s2);
    std::cout<<"Using display function"<<std::endl;
    s2.display();

    //get set fns
    std::cout<<"By Getter = "<<s2.getRollno()<<std::endl;
    std::cout<<"By Getter = "<<s2.getSname()<<std::endl;
    std::cout<<"By Getter = "<<s2.getMarks()<<std::endl;

    //== operator overloaded
    s1==s2;

    //< operator overloading
    s1<s2;

    //[] operator overloading
    s1[2];

    std::cout<<s1;

    return 0;
}