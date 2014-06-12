/*************************************************************************
  > File Name: 5_4_centimeter_to_feet.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 12 Jun 2014 05:39:07 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const float CM_PER_INCH = 2.54f;
    const int INCHES_PER_FOOT = 12;
    float centimeters = 0.0f;

    printf("Enter a height in centimeters: ");
    scanf("%f", &centimeters);
    while (centimeters > 0)
    {
        float inches = centimeters / CM_PER_INCH;
        int feet = (int) inches / INCHES_PER_FOOT;
        printf("%.1f cm = %d feet, %.1f inches\n", centimeters, feet, inches - (feet * INCHES_PER_FOOT));
        printf("Enter a height in centimeters: ");
        scanf("%f", &centimeters);
    }
    printf("bye\n");

    return 0;
}
