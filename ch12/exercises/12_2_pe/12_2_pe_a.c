/*************************************************************************
  > File Name: 12_2_pe_a.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 10 Jul 2014 09:17:50 PM CST
 ************************************************************************/

#include <stdio.h>
#include "12_2_pe_a.h"

void set_mode(int m)
{
    if (m >= 0 && m <= 1)
    {
        mode = m;
    }
    else
    {
        puts("Invalid mode specified. Mode 1 (US) used.");
        mode = 1;
    }
}

void get_info(void)
{
    if (mode == 0)
    {
        printf("Enter distance traveled in kilometers: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in liters: ");
        scanf("%lf", &consumption);
    }
    else if (mode == 1)
    {
        printf("Enter distance traveled in miles: ");
        scanf("%lf", &distance);
        printf("Enter fuel consumed in gallons: ");
        scanf("%lf", &consumption);
    }
}

void show_info(void)
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
