/*************************************************************************
	> File Name: 8_6_get_first.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 20 Jun 2014 05:41:37 PM CST
 ************************************************************************/

#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    char ch;

    while ((ch = get_first()) != EOF)
    {
        printf("%c", ch);
    }
    printf("\n");

    return 0;
}

char get_first(void)
{
    char ch;

    while ( (ch = getchar()) && isspace(ch))
    {
        continue;
    }

    return ch;
}
