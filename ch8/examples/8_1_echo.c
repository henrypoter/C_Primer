/*************************************************************************
	> File Name: 8_1_echo.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 04:23:07 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        putchar(ch);
    }

    return 0;
}
