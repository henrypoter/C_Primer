/*************************************************************************
	> File Name: 6_12_print_power.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 03:06:29 PM CST
 ************************************************************************/

#include <stdio.h>
#include <math.h>

int main(void)
{
    const int SIZE = 8;
    int array[SIZE];
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {
        array[i] = pow(2, i);
    }
    i = 0;
    do
    {
        printf("%d\t", array[i]);
    } while (++i < SIZE);
    printf("\n");

    return 0;
}
