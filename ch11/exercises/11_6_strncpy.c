/*************************************************************************
	> File Name: 11_6_strncpy.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 07 Jul 2014 11:03:35 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdio_ext.h>

char * my_strncpy(char *, const char *, const unsigned int);

int main(void)
{
    const unsigned int SIZE = 128;
    char str1[SIZE];
    char str2[SIZE];
    unsigned int n;
    char ch;

    do
    {
        puts("Input source string:");
        __fpurge(stdin);
        fgets(str2, SIZE, stdin);
        puts("Input the number to copy:");
        __fpurge(stdin);
        scanf("%u", &n);

        puts("Target string:");
        puts(my_strncpy(str1, str2, n));
        puts("Enter any key except q to go on:");
        __fpurge(stdin);
        ch = getchar();
    } while (ch != 'q');

    return 0;
}

char * my_strncpy(char * str1, const char * str2, const unsigned int n)
{
    unsigned int i = 0;

    while (i < strlen(str2) && i < n)
    {
        str1[i] = str2[i];
        i++;
    }
    if (strlen(str2) >= n)
    {
        str1[i] = '\0';
    }

    return str1;
}
