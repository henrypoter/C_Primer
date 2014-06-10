/*************************************************************************
	> File Name: 3_6_altnames.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 01:13:26 AM CST
 ************************************************************************/
/*
 *功能：可移植的整数类型名
 */
#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int16_t me16;

    me16 = 4593;
    printf("First, assume int16_t is short: ");
    printf("me16 = %hd\n", me16);
    printf("Next, let's not make any assumptions.\n");
    printf("Instead, use a \"macro\" from inttypes.h: ");
    printf("me16 = %" PRId16"\n", me16);

    return 0;
}
