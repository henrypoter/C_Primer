/*************************************************************************
	> File Name: 11_14_str_cat.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 18:48:35 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 80

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";

    puts("What is your favorite flower?");
    gets(flower);
    strcat(flower, addon);
    puts(flower);
    puts(addon);
    
    return 0;
}
