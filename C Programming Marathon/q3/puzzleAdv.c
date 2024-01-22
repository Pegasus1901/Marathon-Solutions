#include"header02.h"
#include<stdio.h>

int puzzleAdv(int number){

    int digits=0,n=number;

    while(n!=0){
        n%10;
        digits++;
        n/=10;
    }
    

    switch (digits)
    {
    case 1:
        return printf("\nThe input has one value, so the result is **%d** as per the specified rule. \n",number*number);
        break;
    case 2:
        printf("\nThe input has two values, so the result is **%d** as per the specified rule. \n",twoDigits(number));
        break;
    
    case 3:
        printf("\nThe input has three values, so the result is **%d** as per the specified rule. \n",threeDigits(number));
        break;
    
    case 4:
        printf("\nThe input has four values, so the result is **%d** as per the specified rule. \n",fourDigits(number));
        break;
    
    default:
        printf("\nInvalid Input!!\n");
        break;
    }
    return 0;
}
int twoDigits(int n){
    int rem=0, sum=0, num =n;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    int result= num- sum;
    return result;
}
int threeDigits(int n){
    int rem=0,rev=0;
    while (n!=0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    return rev;
}
int fourDigits(int n){
    int rem=0,sum=0,num=n;
    while (n!=0)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    int result= num%sum;
    return result;
}