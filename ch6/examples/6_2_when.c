/*************************************************************************
	> File Name: 6_2_when.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 12:41:30 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int n = 5;
    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");

    return 0;
}
