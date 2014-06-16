/*************************************************************************
	> File Name: 7_2_cypher1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 09:21:39 PM CST
 ************************************************************************/

#include <stdio.h>

#define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
        {
            putchar(ch);
        }
        else
        {
            putchar(ch + 1);
        }
        ch = getchar();
    }
    putchar(ch);

    return 0;
}
