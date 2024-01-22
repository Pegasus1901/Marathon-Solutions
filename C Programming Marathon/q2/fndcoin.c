#include <stdio.h>
#include "header01.h"

int fndCoin(int *p, int target)
{
    for (int i = 0; i < SIZE; i++)
    {
        // If duplicate elements are found
        if(p[i]==p[i+1]){
            printf("Duplicate values are present in array!!\n");
            return -1;
        }
        //If target is present in array
        if (target == p[i])
        {
            printf("Target coin found in array sucessfully!!\n");
            return i;
        }
        //If target is not present return index where we can input the new value
        else if (target != p[i] && (target > p[i] && target < p[i + 1]))
        {
            printf("Target not found. But can be inserted at %d. \n", i+1);
            return i+1;
        }
    }

}