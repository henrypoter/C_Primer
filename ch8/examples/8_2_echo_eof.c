/*************************************************************************
	> File Name: 8_2_echo_eof.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 04:24:41 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int ch;

    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }

    return 0;
}
