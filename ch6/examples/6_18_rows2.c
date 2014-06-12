/*************************************************************************
	> File Name: 6_18_rows2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:23:58 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
