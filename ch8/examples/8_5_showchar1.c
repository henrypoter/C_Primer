/*************************************************************************
	> File Name: 8_5_showchar1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 04:38:31 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

void display(char ch, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a character and two integers: \n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2)
        {
            break;
        }
        display(ch, rows, cols);
        /*
        while (getchar() != '\n')
        {
            continue;
        }
        */
        printf("Enter another character and two integers: \n");
        printf("Enter a newline to quit.\n");
        __fpurge(stdin);
    }
    printf("Bye.\n");

    return 0;
}

void display(char ch, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++)
    {
        for (col = 1; col <= width; col++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
