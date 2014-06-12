/*************************************************************************
	> File Name: 6_17_rows1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 01:21:47 AM CST
 ************************************************************************/

#include <stdio.h>

#define ROWS 6
#define CHARS 10

int main(void)
{
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    return 0;
}
