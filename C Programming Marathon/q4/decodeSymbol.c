#include <stdio.h>
#include<string.h>
#include"header03.h"
int decodeSymbol(struct SymbolDecoder *p, int n)
{
    // char variable to find or identify
    char find;

    //This loop iterates in struct array for input
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter Mystical Symbol %d = ",i+1);
        getchar();
        scanf("%c",&p[i].symbol);

        printf("Enter Numeric Value %d = ",i+1);
        scanf("%d",&p[i].value);
    }
    //user input to decode the char
    printf("\nEnter symbol to decode = ");
    getchar();
    scanf("%c",&find);


    for(int j=0;j<n;j++){
        if(find==p[j].symbol){
            printf("The numeric value of the mystical symbol '%d' is :\n", p[j].value);
            break;
        }else{
            printf("Wrong symbol input\n");
            break;
        }
    }
    return 0;
}