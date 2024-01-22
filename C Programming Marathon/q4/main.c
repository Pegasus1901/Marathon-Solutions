#include<stdio.h>
#include"header03.h"
#include<stdlib.h>

int main()
{
    //variable to store total count of inputs
    int n;      
    
    printf("Enter number of symbols to translator = ");
    //accept user input here
    scanf("%d",&n);

    // structure memory allocation to store values
    struct SymbolDecoder *sym=(struct SymbolDecoder *)malloc(n*sizeof(struct SymbolDecoder *));

    if(n<=0 || n>10){
        printf("Invalid number of symbols. Re-enter!!! \n");
    }else{
        //function called to decode symbol
        decodeSymbol(sym,n);        
    }

    free(sym);

    return 0;
}
