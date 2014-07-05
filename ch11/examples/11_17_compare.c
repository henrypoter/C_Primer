/*************************************************************************
	> File Name: 11_17_compare.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 21:13:58 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
#define MAX 40

int main(void)
{
    char try[MAX];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (strcmp(try, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        gets(try);
    }
    puts("That's right!");

    return 0;
}
