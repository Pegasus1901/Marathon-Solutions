#include<iostream>
#include<cstring>
#include"bill.h"

int totalbill(Bill bs[]){
        int tot=0;
        for (int i = 0; i < 3; i++)
        {
            tot+=bs[i].getBillamount();
        }
        return tot;
    }

bool search(Bill b[]){
    char *srch= new char[20];
    std::cout<<"Enter Customer Name To Search = "<<std::endl;
    std::cin>>srch;

    for (int i = 0; i < 3; i++)
    {
        if(strcmp(srch,b[i].getCustomerinfo())){
            std::cout<<b[i];
            return true;
        }
    }
    return false;
    
}

int main(){
    
    Bill *bills = new Bill[3];


    for(int i=0;i<3;i++){
        bills[i].accept();
    }

    bills->display();

    std::cout<<"Total Bill Amount = "<<totalbill(bills)<<std::endl;

    search(bills);

    return 0;
}