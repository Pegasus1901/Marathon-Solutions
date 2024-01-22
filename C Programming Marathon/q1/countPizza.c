#include<stdio.h>
#include "header.h"

void countPizzas(int n){
    int price,veg=0,nonveg=0;
    int total=n;

    //Loop till the budget is zero
    while(n!=0){
        printf("\nEnter the amount of pizza = ");
        scanf("%d",&price);     //Take user price input
        if(price == 5){
            n-=price;
            veg++;              //Increment total number of veg pizzas
        }else if(price == 10){
            n-=price;   
            nonveg++;           //Increment non veg pizza for each entry
        }else{
            printf("Please re enter corrert value!!\n");  //in case of invalid input
        }
    }
    display(total,veg,nonveg);
}
//Function to display the total order
void display(int total,int vegP,int nonvegP){
    printf("\nPizza party Budget : %d\n", total);
    printf("Total Veg pizzas ordered : %d\n", vegP);
    printf("Total Non-veg pizzas ordered : %d\n", nonvegP);
}