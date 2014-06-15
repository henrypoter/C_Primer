/*************************************************************************
	> File Name: 6_2_print_triangle.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 03:13:01 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int level = 0;
    int i = 0, j = 0;

    printf("Please input the level of triangle: ");
    scanf("%d", &level);
    for (i = 0; i < level; ++i)
    {
        j = i + 1;
        while (j-- > 0)
        {
            printf("$");
        }
        printf("\n");
    }
    
    return 0;
}
