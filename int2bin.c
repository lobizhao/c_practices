#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>//
// Created by 壮壮 ZHAO on 2023/12/17.
//
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