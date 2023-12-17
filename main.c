#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool isAnagram(char *s, char *t)
{
    if (strlen(s) != strlen(t))
    {
        return false;
    }
    int list[26] = {};

    for (char *p = s; *p != '\0'; p++)
    {
        int n = *p - 'a';
        list[n]++;
    }

    for (char *p = t; *p != '\0'; p++)
    {
        int n = *p - 'a';

        list[n]--;
    }

    for (int i = 0; i < 26; i++)
    {
        if (list[i] != 0)
        {
            return false;
        }
    }

    return true;
}

// second
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
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

// final exam int2bin
char *int2bin(int decimal, char binary[])
{
    if (!decimal)
    {
        return NULL;
    }
    unsigned int n = decimal;
    int i = 0;
    while (n != 0)
    {
        unsigned int bin = n % 2;
        binary[i] = bin + '0';
        i++;
        n = n / 2;
    }
    binary[i] = '\0';

    int trylen = strlen(binary);
    printf("show binary %s and size: %d\n", binary, trylen);
    //switch order

    int j = 0;

    for(j ; j< i/2; j++){
        char temp = binary[j];
        binary[j] = binary[i -1 -j];
        binary[i -1 - j] = temp;
    }
    
    return binary;
}


//palindrome
bool isPalindrome(int x) {

    if(x <0){
        return false;
    }

    int i = 0;
    char list[32];

    while (x != 0){
        int single = x%10;
        list[i] = single + '0'; //change int type to char
        i++;
        x = x/10;
    }
    list[i] = '\0';
    printf("show %s and show len%d\n", list, i);

    for(int j =0; j < i/2; j++ ){

        if(list[j] != list[i-1-j]){

            return false;
        }
    }
    return true;
}

void rotate(int* nums, int numsSize, int k) {

}


int main()
{

    char test[] = "abcde";
    printf("about length %d\n", strlen(test));   //len different with
    int len = 5;

    for (int i = 0; i < len / 2; i++)
    {
        char temp = test[i];
        test[i] = test[len - 1 - i];
        test[len - 1 - i] = temp;
    }

    printf("%s", test);

    
    //---------------------------------

    //    char str1[] = "thomas";
    //    char str2[] = "omthas";
    //    int ret = isAnagram(str1, str2);
    //    //printf("isanagram? :%d\n", ret);
    //
    //    int nums[] = {2,7,11,15};
    //    int nums2[] = {2,5,5,11};
    //    int numaa[] = {3,3};
    //
    //    int test;
    //    int *result = twoSum(nums2,4,10, &test);
    //
    //    //printf("test %d and %d\n", result[0],result[1]);
    //
        char binary[100];
        printf("test what ist that %s\n", int2bin(255,binary));

        int palin = 121;
        int palin1 = -121;
        int palin2 = 10;


    printf("test result palin :%d\n  and palin1 %d\n and palin2 %d\n", isPalindrome(palin), isPalindrome(palin1),isPalindrome(palin2));

    return 0;
}