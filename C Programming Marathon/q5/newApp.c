#include<stdio.h>
#include"header04.h"
void ModifyA(int *a){
    int ch,m;
    printf("Enter magic number = ");
    scanf("%d",&ch);
    for(int j=0;j<SIZE;j++){
        if(ch==a[j]){
            m=j;
        }
    }
    for(int i=0;i<m;i++){
        if(a[i]>ch){
            int temp;
            temp=a[i];
            a[i]=a[SIZE-i-1];
            a[SIZE-i-1]=temp;
        }
    for(int j=SIZE-1;j>m;j--){
        if(a[i]>a[j]){
            int swap;
            swap=a[i];
            a[i]=a[j];
            a[j]=swap;
        }
    }
    }

    for (int x = 0; x < SIZE; x++)
    {
        printf(" %d ",a[x]);
    }
    
}
