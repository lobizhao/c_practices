cmake_minimum_required(VERSION 3.27)
project(final_test C)

set(CMAKE_C_STANDARD 17)

add_executable(final_test main.c
        int2bin.c
        listsum.c
        isAnagram.c
        isPalindrome.c)
