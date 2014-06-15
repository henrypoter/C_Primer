/*************************************************************************
  > File Name: 6_7_compute_float.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Mon 16 Jun 2014 12:43:20 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float a = 0.0f, b = 0.0f;

    printf("Please input two floats:\n");
    while (2 == scanf("%f %f", &a, &b))
    {
        printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n", a, b, a, b, (a-b)/(a*b));
        printf("Please input two floats:\n");
    }

    return 0;
}
