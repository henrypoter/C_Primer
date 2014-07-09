/*************************************************************************
	> File Name: 12_4_global.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 10:48:40 PM CST
 ************************************************************************/

#include <stdio.h>

int units = 0;

void critic(void);

int main(void)
{
    extern int units;

    printf("How many pounds to firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
    {
        critic();
    }
    printf("You must have looked it up!\n");

    return 0;
}

void critic(void)
{
    printf("No luck, chummy. Try again.\n");
    scanf("%d", &units);
}
