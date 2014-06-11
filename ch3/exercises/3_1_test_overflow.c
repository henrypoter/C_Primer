/*************************************************************************
	> File Name: 3_1_test_overflow.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 01:54:58 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    unsigned int a = 4294967295;
    int b = 2147483647;
    float c = 3.4e38;
    float d = 0.1234e-2;
   
    printf("%u + 1 = %u\n", a, a+1);
    printf("%d + 1 = %d\n", b, b+1);
    printf("%e * 10 = %e\n", c, c*10);
    printf("%f / 10 = %f\n", d, d/10);

    return 0;
}
