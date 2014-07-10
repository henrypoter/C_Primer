/*************************************************************************
	> File Name: 12_3_pe_a.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 10:36:40 PM CST
 ************************************************************************/

#include <stdio.h>
#include "12_3_pe_a.h"

void set_mode(int * mode)
{
    if (*mode > 1)
    {
        puts("Invalid mode specified. Mode 1 (US) used.");
        *mode = 1;
    }
}

void get_info(const int mode, double * distance, double * consumption)
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", consumption);
    }
    else if (mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", consumption);
    }
}

void show_info(const int mode, const double distance, const double consumption)
{
    if (mode == 0)
    {
        printf("Fuel consumption is %.2f liters per 100 km.\n", consumption / distance * 100);
    }
    else if (mode == 1)
    {
        printf("Fule consumption is %.1f miles per gallon.\n", distance / consumption);
    }
}
