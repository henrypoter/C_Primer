/*************************************************************************
  > File Name: manydice.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Wed 16 Jul 2014 03:57:27 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "diceroll.h"

int main(void)
{
    int sets;
    int dice, sides, roll;
    int i = 0;

    srand((unsigned int) time(0));
    printf("Enter the number of sets: enter q to stop.\n");
    while (scanf("%d", &sets) == 1 && sets > 0)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sides throws.", sets, dice, sides);
        for (i = 0; i < sets; i++)
        {
            if (i % 15 == 0)
            {
                printf("\n");
            }
            roll = roll_n_dice(dice, sides);
            printf("%3d", roll);
        }
        printf("\nHow many sets? Enter 0 to stop.\n");
    }
    printf("The rollem() function was called %d times.\n", roll_count);

    return 0;
}
