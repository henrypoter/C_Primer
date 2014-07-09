/*************************************************************************
	> File Name: 12_11_diceroll.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:14:42 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include "12_12_diceroll.h"

int roll_count = 0;

static int rollem(int sides)
{
    int roll;

    roll = rand() % sides + 1;
    ++roll_count;
    return roll;
}

int roll_n_dice(int dice, int sides)
{
    int d;
    int total = 0;

    if (sides < 2)
    {
        printf("Need at least 2 sides.\n");
        return -2;
    }
    if (dice < 1)
    {
        printf("Need at least 1 die.\n");
        return -1;
    }
    for (d = 0; d < dice; d++)
    {
        total += rollem(sides);
    }

    return total;
}
