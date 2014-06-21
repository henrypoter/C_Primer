/*************************************************************************
	> File Name: 9_6_recur.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 08:51:00 PM CST
 ************************************************************************/

#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);

    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
    {
        up_and_down(n+1);
    }
    printf("LEVEL %d: n location %p\n", n, &n);
}
