//
// Created by 壮壮 ZHAO on 2023/12/17.
//
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