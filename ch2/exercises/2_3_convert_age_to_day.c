/*************************************************************************
	> File Name: 2_3_convert_age_to_day.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 03:32:43 PM CST
 ************************************************************************/
/*
 * 功能：将年龄转换为天数
 */

#include <stdio.h>

int main(void)
{
    unsigned char age = 24;

    printf("Age: %d\n", age);
    printf("Day: %d\n", age * 365);

	return 0;
}
