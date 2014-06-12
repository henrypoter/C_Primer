/*************************************************************************
  > File Name: 5_3_days_to_weeks.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 12 Jun 2014 05:32:49 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const int PER_WEEK_DAYS = 7;
    int days = 0;

    printf("Please input days(<=0 to quit): ");
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d days are %d weeks, %d days.\n", 
                days, days / PER_WEEK_DAYS, days % PER_WEEK_DAYS);
        printf("Please input days(<=0 to quit): ");
        scanf("%d", &days);
    }

    return 0;
}
