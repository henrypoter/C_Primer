/*************************************************************************
	> File Name: 5_7_print_cubic.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 09:35:00 PM CST
 ************************************************************************/

#include <stdio.h>

float cube(float n);

int main(void)
{
    float num = 0.0f;

    printf("Please input a float: ");
    scanf("%f", &num);
    printf("The cube of %f is %f\n", num, cube(num));

    return 0;
}

float cube(float n)
{
    return n * n * n;
}
