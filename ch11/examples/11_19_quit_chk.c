/*************************************************************************
	> File Name: 11_19_quit_chk.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 21:40:23 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define SIZE 81
#define LIM 100
#define STOP "quit"

int main(void)
{
    char input[LIM][SIZE];
    int ct = 0;

    printf("Enter up to %d lines(type quit to quit):\n", LIM);
    while (ct < LIM && gets(input[ct]) != NULL && strcmp(input[ct], STOP) != 0)
    {
        ct++;
    }
    printf("%d strings entered.\n", ct);

    return 0;
}
