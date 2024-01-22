#include<stdio.h>
#include "header04.h"
#include <stdlib.h>
int main()
{
    //declaring an integer array
    int *arr=(int*)malloc(SIZE * sizeof(int*));

    //calling function for findind magic number
    accept(arr);
    free(arr);
    return 0;
}
