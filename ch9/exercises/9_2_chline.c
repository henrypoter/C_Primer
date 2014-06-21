/*************************************************************************
  > File Name: 9_2_chline.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Sat 21 Jun 2014 10:05:37 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

void chline(char, int, int);

int main(void)
{
    char ch;
    int x, y;

    printf("Please input a char: ");
    ch = getchar();
    __fpurge(stdin);
    printf("Please input the coordinate to print: ");
    scanf("%d %d", &x, &y);
    chline(ch, x, y);
    printf("\n");

    return 0;
}

void chline(char ch, int x, int y)
{
    while(--x != 0)
    {
        putchar('\n');
    }
    while (--y != 0)
    {
        putchar(' ');
    }
    putchar(ch);
}
