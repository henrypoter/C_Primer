/*************************************************************************
	> File Name: 10_11_rain.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed Jul  2 21:07:17 2014
 ************************************************************************/

#include <stdio.h>

void yearly_average(const unsigned int year, const unsigned int month,
        const double rain[year][month]);

void monthly_average(const unsigned int year, const unsigned int month,
        const double rain[year][month]);

int main(void)
{
    const unsigned int YEARS = 5;
    const unsigned int MONTHS = 12;
    const double rain[YEARS][MONTHS] = {
        {4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6},
        {8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3},
        {9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4},
        {7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2},
        {7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2}
    };

    yearly_average(YEARS, MONTHS, rain);
    monthly_average(YEARS, MONTHS, rain);

    return 0;
}

void yearly_average(const unsigned int year, const unsigned int month,
        const double rain[year][month])
{
    unsigned int i = 0, j = 0;
    double subtot, total;

    printf(" YEAR\tRAINFALL (inches)\n");
    for (i = 0, total = 0; i < year; i++)
    {
        for (j = 0, subtot = 0; j < month; j++)
        {
            subtot += rain[i][j];
        }
        printf("%5d %15.1f\n", 2000 + i, subtot);
        total += subtot;
    }
    printf("\nThe yearly average is %.1f inches.\n\n", total / year);
}

void monthly_average(const unsigned int year, const unsigned int month,
        const double rain[year][month])
{
    unsigned int i = 0, j = 0;
    double subtot = 0.0;

    printf("MONTHLY AVERAGES: \n");
    printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");

    for (i = 0; i < month; i++)
    {
        for (j = 0, subtot = 0.0; j < year; j++)
        {
            subtot += rain[j][i];
        }
        printf("%4.1f", subtot / year);
    }
    printf("\n");
}
