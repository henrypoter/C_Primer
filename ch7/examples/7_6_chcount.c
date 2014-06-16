/*************************************************************************
	> File Name: 7_6_chcount.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 09:41:34 PM CST
 ************************************************************************/

#include <stdio.h>

#define PERIOD '.'

int main(void)
{
    int ch;
    int charcount = 0;

    while ((ch = getchar()) != PERIOD)
    {
        if (ch != '"' && ch != '\'')
        {
            charcount++;
        }
    }
    printf("There are %d non-quote characters.\n", charcount);

    return 0;
}
