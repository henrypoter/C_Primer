/*************************************************************************
	> File Name: 12_1_hiding.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 09 Jul 2014 10:37:23 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int x = 30;
    printf("x in outer block: %d\n", x);
    {
        int x = 77;
        printf("x in inner block: %d\n", x);
    }
    printf("x in outer block: %d\n", x);
    while (x++ < 33)
    {
        int x = 100;
        x++;
        printf("x in while loop: %d\n", x);
    }
    printf("x in outer block: %d\n", x);

    return 0;
}
