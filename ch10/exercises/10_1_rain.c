/*************************************************************************
	> File Name: 10_1_rain.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 24 Jun 2014 09:06:27 AM CST
 ************************************************************************/

#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(void)
{
    const float rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };
    float subtot, total;
    const float (*year)[MONTHS];
    const float * month;
    int cnt = 0, i = 0;

    printf(" YEAR\tRAINFALL (inches)\n");
    for (year = rain, total = 0; year < rain + YEARS; year++)
    {
        for (month = *year, subtot = 0; month < *year + MONTHS; month++)
        {
            subtot += *month;
        }
        printf("%5d %15.1f\n", 2000 + cnt, subtot);
        cnt++;
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / YEARS);
    printf("MONTHLY AVERAGES: \n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (i = 0; i < MONTHS; i++)
    {
        for (year = rain, subtot = 0; year < rain + YEARS; year++)
        {
            subtot += *(*year + i);
        }
        printf("%4.1f", subtot / YEARS);
    }
    printf("\n");

    return 0;
}
