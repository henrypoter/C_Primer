/*************************************************************************
	> File Name: 12_13_manydice.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 11:19:47 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "12_12_diceroll.h"

int main(void)
{
    int dice, roll;
    int sides;

    srand((unsigned int) time(0));
    printf("Enter the number of sides per die, 0 to stop.\n");
    while (scanf("%d", &sides) == 1 && sides > 0)
    {
        printf("How many dice?\n");
        scanf("%d", &dice);
        roll = roll_n_dice(dice, sides);
        printf("You have rolled a %d using %d %d-sides dice.\n", 
                roll, dice, sides);
        printf("How many sides? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);
    printf("GOOD FORTUNE TO YOU!\n");

    return 0;
}
