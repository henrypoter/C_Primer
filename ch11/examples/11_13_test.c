/*************************************************************************
	> File Name: 11_13_test.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 18:44:27 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

void fit(char *, unsigned int);

int main(void)
{
    char msg[] = "Hold on to your hats, hackers. ";

    puts(msg);
    fit(msg, 7);
    puts(msg);
    puts("Let's look at some more of the string. ");
    puts(msg + 8);

    return 0;
}

void fit(char * string, unsigned int size)
{
    if (strlen(string) > size)
    {
        *(string + size) = '\0';
    }
}
