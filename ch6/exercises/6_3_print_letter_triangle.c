/*************************************************************************
	> File Name: 6_3_print_letter_triangle.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 03:19:55 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int level = 0;
    int i = 0, j = 0;
    char ch = 'A';

    printf("Please input the level: ");
    scanf("%d", &level);
    for (i = 1; i <= level; ++i)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch + level - j);
        }
        printf("\n");
    }

    return 0;
}
