/*************************************************************************
  > File Name: 5_1_minutes_to_hour.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 12 Jun 2014 05:20:37 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const int PER_HOUR_MINUTES = 60;
    int minutes = 0;

    printf("Please input minutes(<=0 to quit): ");
    scanf("%d", &minutes);
    while (minutes > 0)
    {
        printf("%d minutes is equal to %d hour, %d minutes.\n", minutes,
                minutes / PER_HOUR_MINUTES, minutes % PER_HOUR_MINUTES);
        printf("Please input minutes(<=0 to quit): ");
        scanf("%d", &minutes);
    }

    return 0;
}
