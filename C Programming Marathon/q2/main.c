#include<stdio.h>
#include <stdlib.h>
#include"header01.h"
int main()
{
    int target;
    
    //Memory allocation for 1D-array
    int *arr=(int *)malloc(SIZE*sizeof(int *)); 

    //Taking array input
    printf("Enter array elements- ");
    for(int i=0;i<SIZE;i++){
        scanf("%d",&arr[i]);
    }

    //taking target input
    printf("Enter the target value = ");
    scanf("%d",&target);

    //Printing the solution as per requirements
    printf("Solution is = %d \n",fndCoin(arr,target));

    return 0;
}
