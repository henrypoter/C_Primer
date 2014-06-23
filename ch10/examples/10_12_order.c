/*************************************************************************
	> File Name: 10_12_order.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 23 Jun 2014 10:44:23 PM CST
 ************************************************************************/

#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
    int * p1, * p2, * p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

    return 0;
}
