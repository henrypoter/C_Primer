/*************************************************************************
	> File Name: 4_6_test_float_precision.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 11:04:06 AM CST
 ************************************************************************/

#include <stdio.h>
#include <float.h>

int main(void)
{
    double d = 1.0 / 3.0;
    float f = 1.0 / 3.0;

    printf("float f = 1.0 / 3.0:\n");
    printf("%.4f\n%.12f\n%.16f\n", f, f, f);
    printf("double d = 1.0 / 3.0:\n");
    printf("%.4f\n%.12f\n%.16f\n", d, d, d);

    printf("FLT_DIG:%d\nDBL_DIG:%d\n", FLT_DIG, DBL_DIG);

    return 0;
}
