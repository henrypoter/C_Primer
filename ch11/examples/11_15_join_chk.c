/*************************************************************************
	> File Name: 11_15_join_chk.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 18:51:27 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 30
#define BUGSIZE 13

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    gets(flower);
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE)
    {
        strcat(flower, addon);
    }
    puts(flower);
    puts("What is your favorite bug?");
    gets(bug);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available);
    puts(bug);

    return 0;
}
