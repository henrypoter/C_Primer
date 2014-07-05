/*************************************************************************
	> File Name: 11_16_nogo.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 21:07:50 2014
 ************************************************************************/

#include <stdio.h>

#define ANSWER "Grant"

int main(void)
{
    char try[40];

    puts("Who is buried in Grant's tomb?");
    gets(try);
    while (try != ANSWER)
    {
        puts("No, that's wrong. Try again. ");
        gets(try);
    }
    puts("That's right!");

    return 0;
}
