/*************************************************************************
	> File Name: 4_3_print_float.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 12:40:48 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float f = 0.0f;
    
    printf("Input a float number: ");
    scanf("%f", &f);

    printf("a.The input is %3.1f or %2.1e\n", f, f);
    printf("b.The input is %+5.3f or %4.3E\n", f, f);

    return 0;
}
