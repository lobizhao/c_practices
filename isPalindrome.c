//
// Created by 壮壮 ZHAO on 2023/12/17.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

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