/*************************************************************************
	> File Name: 5_2_print_num.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 05:26:56 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int num = 0;
    int scope = 10;

    printf("Please input a number: ");
    scanf("%d", &num);
    while (scope-- >= 0)
    {
        printf("%d ", num);
        num++;
    }
    printf("\n");

    return 0;
}
