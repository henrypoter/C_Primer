/*************************************************************************
	> File Name: 6_12_for_cube.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:07:53 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int num;
    
    printf("    n   n cubed\n");
    for (num = 1; num <= 6; num++)
    {
        printf("%5d %5d\n", num, num * num * num);
    }

    return 0;
}
