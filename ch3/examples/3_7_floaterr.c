/*************************************************************************
	> File Name: 3_7_floaterr.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 10:47:38 AM CST
 ************************************************************************/
/*
 *功能：测试浮点数的舍入误差
 */
#include <stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f\n", a);

    return 0;
}
