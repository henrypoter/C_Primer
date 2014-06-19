/*************************************************************************
	> File Name: 8_4_guess.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 19 Jun 2014 04:30:45 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int guess = 1;
    printf("Pick an integer from 1 to 100. I will try to guess it.\n");
    printf("Respond with a y if my guess is right and with an n if it is wrong.\n");
    printf("Uh...is your number %d\n", guess);
    while (getchar() != 'y')
    {
        printf("Well, then, is it %d?\n", ++guess);
    }
    printf("I knew I could do it!\n");

    return 0;
}
