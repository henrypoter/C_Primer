/*************************************************************************
	> File Name: 3_1_rhodium.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 04:40:17 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float weight;
    float value;
    printf("Are you worth your weight in rhodium?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = 770 * weight * 14.5833;
    printf("Your weight in rhodium  is worth $%.2f.\n", value);
    printf("You are easily worth that! If rhodium prices drop, \n");
    printf("eat more to maintain your value.\n");

	return 0;
}
