/*************************************************************************
	> File Name: 3_5_age_to_seconds.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 02:11:24 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    unsigned int age = 0;
    const unsigned long long per_year_seconds = 3.156e7;

    scanf("%u", &age);
    printf("Your age is %u, which is equal to %llu seconds.", age, age * per_year_seconds);

    return 0;
}
