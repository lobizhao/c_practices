//
// Created by 壮壮 ZHAO on 2023/12/17.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{

    int *p = malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < numsSize; i++)
    {

        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                p[0] = i;
                p[1] = j;
                return p;
            }
        }
    }
    return NULL;
}