/*************************************************************************
	> File Name: 4_17_skip2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:56:42 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int n;

    printf("Please enter three integers: \n");
    scanf("%*d %*d %d", &n);
    printf("The last integer was %d\n", n);

    return 0;
}
