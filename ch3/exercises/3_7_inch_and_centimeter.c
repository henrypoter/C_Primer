/*************************************************************************
	> File Name: 3_7_inch_and_centimeter.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 02:29:54 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float height = 0.0f;
    
    printf("Please input your height(unit:inch): ");
    scanf("%f", &height);
    printf("Your height is %f inches, which is equal to %f centimeters.\n", height, height * 2.54);

    return 0;
}
