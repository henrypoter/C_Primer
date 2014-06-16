/*************************************************************************
	> File Name: 6_14_print_line_string.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 03:28:51 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    const int SIZE = 255;
    char line[SIZE]; 
    int i = 0;

    printf("Please input a line:\n");
    while (scanf("%c", &line[i]) && line[i] != '\n')
    {
        i++;
    }
    line[i] = '\0';

    for (i = strlen(line) - 1; i >= 0; i--)
    {
        printf("%c", line[i]);
    }
    printf("\n");

    return 0;
}
