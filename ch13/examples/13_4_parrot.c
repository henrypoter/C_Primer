/*************************************************************************
	> File Name: 13_4_parrot.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 17 Jul 2014 05:40:53 PM CST
 ************************************************************************/

#include <stdio.h>

#define MAXLINE 20

int main(void)
{
    char line[MAXLINE];

    while (fgets(line, MAXLINE, stdin) != NULL && line[0] != '\n')
    {
        fputs(line, stdout);
    }

    return 0;
}
