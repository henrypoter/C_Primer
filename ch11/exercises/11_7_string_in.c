/*************************************************************************
  > File Name: 11_7_string_in.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Mon 07 Jul 2014 03:14:14 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

const char * string_in(const char *, const char *);

int main(void)
{
    const unsigned int SIZE = 128;
    char str1[SIZE];
    char str2[SIZE];
    char ch;

    do
    {
        puts("Input string1:");
        __fpurge(stdin);
        fgets(str1, SIZE, stdin);
        str1[strlen(str1) - 1] = '\0';
        puts("Input string2:");
        __fpurge(stdin);
        fgets(str2, SIZE, stdin);
        str2[strlen(str2) - 1] = '\0';

        if (NULL == string_in(str1, str2))
        {
            puts("Not found!");
        }
        else
        {
            puts("Found!");
        }

        puts("Enter any key except q to go on.");
        __fpurge(stdin);
        ch = getchar();
    } while (ch != 'q');

    return 0;
}

const char * string_in(const char * str1, const char * str2)
{
    const char * begin = str1;
    const char * p;
    const char * q;

    while (strlen(begin) >= strlen(str2))
    {
        p = begin;
        q = str2;
        if (*p != *q)
        {
            begin++;
        }
        else
        {
            while (*q != '\0')
            {
                if (*q != *p)
                {
                    break;
                }
                p++;
                q++;
            }
            if (*q == '\0')
            {
                return begin;
            }
            else
            {
                begin++;
            }
        }
    }

    return NULL;
}
