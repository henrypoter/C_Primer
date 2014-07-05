/*************************************************************************
	> File Name: 11_22_copy2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 22:27:19 2014
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define WORDS "beast"
#define SIZE 40

int main(void)
{
    char * orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);

    return 0;
}
