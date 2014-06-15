/*************************************************************************
	> File Name: 6_4_print_pyramid.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 03:30:22 PM CST
 ************************************************************************/

#include <stdio.h>

void print_per_level(int cur_level, int total_level);

int main(void)
{
    char ch;
    int level = 0;
    int i = 0, j = 0;

    do
    {
        printf("Please input a upper letter: ");
        scanf("%c", &ch);
    } while ( ch < 'A' || ch > 'Z');

    level = ch - 'A' + 1;
    for (i = 0; i < level; ++i)
    {
        for (j = 1; j < level - i; j++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("%c", 'A' + j);
        }
        for (j = i - 1; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }
        printf("\n");
    }

    return 0;
}
