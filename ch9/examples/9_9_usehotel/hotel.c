/*************************************************************************
	> File Name: hotel.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 09:32:16 PM CST
 ************************************************************************/

#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the dedired hotel:\n");
    printf("1)Fairfield Arms\t2)Hotel Olympic\n");
    printf("3)Chertworthy Plaza\t4)The Stockton\n");
    printf("5)quit\n");
    printf("%s%s\n", STARS, STARS);

    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
        {
            scanf("%*s");
        }
        printf("Enter an integer from 1 to 5, please.\n");
    }

    return code;
}

int getnights(void)
{
    int nights;

    printf("How many nights are needed? ");
    while (1 != scanf("%d", &nights))
    {
        scanf("%*s");
        printf("Please enter an integer, such as 2.\n");
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;
    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    {
        total += rate * factor;
    }
    printf("The hotal cost will be $%0.2f.\n", total);
}
