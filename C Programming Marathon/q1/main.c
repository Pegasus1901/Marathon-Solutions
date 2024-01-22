#include<stdio.h>
#include"header.h"

int main()
{
    //Number of pizzas and budget
    int budget=50;

    //Display Menu for selection(only once)
    printf("**************************************************\n");
    printf("Please Select The Pizza And Enter Price From Menu- \n");
    printf("\nMenu :-\n");
    printf("1.Veg Pizza = Rs.5\n2.Non-veg Pizza = Rs.10\n");

    //To count total no of pizzas
    countPizzas(budget);

    return 0;
}
