/*************************************************************************
	> File Name: 12_1_global.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 08:26:00 AM CST
 ************************************************************************/

#include <stdio.h>

void critic(int * units);

int main(void)
{
    static int units;

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        critic(&units);
    }
    printf("You must have looked it up!\n");

    return 0;
}

void critic(int * units)
{
    printf("No luck, chummy. Try again.\n");
    scanf("%d", units);
}
