/*************************************************************************
  > File Name: 11_9_delete_blank.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Mon 07 Jul 2014 05:09:50 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>
#include <stdbool.h>

void trim(char *);

int main(void)
{
    const unsigned int SIZE = 128;
    char str[SIZE];

    while (true)
    {
        puts("Input a string(null string to quit):");
        __fpurge(stdin);
        fgets(str, SIZE, stdin);
        str[strlen(str) - 1] = '\0';

        if (*str != '\0')
        {
            trim(str);
            puts(str);
        }
        else
        {
            break;
        }
    }

    return 0;
}

void trim(char * str)
{
    char * p = str;
    char * q = str;

    while (*p != '\0' && *p != ' ')
    {
        p++;
    }

    if (' ' == *p)
    {
        q = p + 1;

        while (*q != '\0')
        {
            if (*q != ' ')
            {
                *p = *q;
                p++;
            }
            q++;
        }
    }
    *p = '\0';
}
