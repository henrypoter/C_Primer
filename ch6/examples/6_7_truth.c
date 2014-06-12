/*************************************************************************
	> File Name: 6_7_truth.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 12:53:33 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int n = 3;

    while (n)
    {
        printf("%2d is true\n", n--);
    }
    printf("%2d is false\n", n);
    n = -3;
    while (n)
    {
        printf("%2d is true\n", n++);
    }
    printf("%2d is false\n", n);

    return 0;
}
