#include<stdio.h>
#include"header04.h"

int ModifyArray(int *a){
    //getting user input as magic number
    int choice;
    printf("Enter the magic nmber = ");
    scanf("%d",&choice);
    
    //sorting array using swapping
    for(int i=0;i<SIZE;i++){
        for(int j=i+1;j<SIZE-1;j++){
            if(a[i]>=a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    //getting the index of array
    for(int i=0;i<SIZE;i++){

        if(choice==a[i]){
            printf("Index %d \n",i);
            printf("Array modified is { ");
            for(int j=0;j<SIZE;j++){
                printf("%d ", a[j]);
            }
            printf("}\n");
            return i;
        }
    }
}

//Accept the input array values from user
void accept(int *array){
    printf("Enter array elements using spaces between them - \n");
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d",&array[i]);
    }

    // ModifyArray(array);
    ModifyA(array);
    
}