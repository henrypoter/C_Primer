/*************************************************************************
	> File Name: 9_3_print_char.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat 21 Jun 2014 10:12:07 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

void print(char, int, int);

int main(void)
{
    char ch;
    int rows = 0, cols = 0;

    printf("Please enter the char to print: ");
    ch = getchar();
    __fpurge(stdin);
    printf("Please enter the rows and cols to print: ");
    scanf("%d %d", &rows, &cols);
    print(ch, rows, cols);

    return 0;
}

void print(char ch, int rows, int cols)
{
    int i = 0;

    while (rows-- != 0)
    {
        for (i = 0; i < cols; i++)
        {
            putchar(ch);
        }
        putchar('\n');
    }
}
