/*************************************************************************
	> File Name: 3_4_print_float.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 02:08:32 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float f = 0.0f;
    scanf("%f", &f);
    printf("The input is %f or %e.\n", f, f);

    return 0;
}
