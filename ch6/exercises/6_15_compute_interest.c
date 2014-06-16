/*************************************************************************
	> File Name: 6_15_compute_interest.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 03:38:59 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    double Daphne = 100.0;
    double Deirdre = 100.0;
    int year = 0;

    while (Daphne >= Deirdre)
    {
        Daphne += 100.0 * 0.1;
        Deirdre += Deirdre * 0.05;
        year++;
    }

    printf("After %d years, Deirdre's investment is %lf, Daphne's investment is %lf\n", year, Deirdre, Daphne);

    return 0;
}
