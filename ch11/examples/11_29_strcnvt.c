/*************************************************************************
	> File Name: 11_29_strcnvt.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 23:02:01 2014
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char number[30];
    char * end;
    long value;

    puts("Enter a number (empty ling to quit): ");
    while (gets(number) && number[0] != '\0')
    {
        value = strtol(number, &end, 10);
        printf("value: %ld, stopped at %s(%d)\n", value, end, *end);
        value = strtol(number, &end, 16);
        printf("value: %ld, stopped at %s(%d)\n", value, end, *end);
        puts("Next number: ");
    }
    puts("Bye!\n");

    return 0;
}
