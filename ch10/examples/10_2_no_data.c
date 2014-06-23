/*************************************************************************
	> File Name: 10_2_no_data.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 09:28:40 PM CST
 ************************************************************************/

#include <stdio.h>

#define SIZE 4

int main(void)
{
    int no_data[SIZE];
    int i;

    printf("%2s%14s\n", "i", "no_data[i] ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%2d%14d\n", i, no_data[i]);
    }

    return 0;
}
