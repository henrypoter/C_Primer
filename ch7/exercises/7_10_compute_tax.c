/*************************************************************************
	> File Name: 7_10_compute_tax.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 17 Jun 2014 08:54:40 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

int main(void)
{
    const float TAX_TYPE1 = 17850.0f;
    const float TAX_TYPE2 = 23900.0f;
    const float TAX_TYPE3 = 29750.0f;
    const float TAX_TYPE4 = 14875.0f;
    const float TAX_RATE1 = 0.15f;
    const float TAX_RATE2 = 0.28f;

    int type = 0;
    float gross = 0.0f;
    float tax = 0.0f;
    float basic = 0.0f;

    while ((2 == scanf("%d %f", &type, &gross)) && type >= 1 && type <= 4 && gross > 0)
    {
        switch (type)
        {
            case 1:
                basic = TAX_TYPE1;
                break;
            case 2:
                basic = TAX_TYPE2;
                break;
            case 3:
                basic = TAX_TYPE3;
                break;
            case 4:
                basic = TAX_TYPE4;
                break;
        }
        if (gross <= basic)
        {
            tax = gross * TAX_RATE1;
        }
        else
        {
            tax = basic * TAX_RATE1 + (gross - basic) * TAX_RATE2;
        }
        printf("Tax: %.2f\n", tax);
        __fpurge(stdin);
    }

    return 0;
}
