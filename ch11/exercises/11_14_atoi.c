/*************************************************************************
  > File Name: 11_14_atoi.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Wed 09 Jul 2014 08:19:32 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int atoi (const char * str);

int main(void)
{
    const unsigned int MAX_LEN = 32;
    char str[MAX_LEN];
    int ret;

    puts("Enter a string of only numbers:");
    while (fgets(str, MAX_LEN, stdin) != NULL)
    {
        str[strlen(str) - 1] = '\0';
        printf("String: %s\n", str);
        ret = atoi(str);
        if (ret == -1)
        {
            puts("Incorrect string!");
        }
        else
        {
            printf("Integer: %d\n", atoi(str));
        }
    }

    return 0;
}

int atoi (const char * str)
{
    int ret = 0;
    int weight = (int)pow(10, strlen(str) - 1);

    while (*str != '\0')
    {
        if (isdigit(*str))
        {
            ret += ((*str) - '0') * weight;           
            weight /= 10;
            str++;
        }
        else
        {
            return -1;
        }
    }

    return ret;
}
