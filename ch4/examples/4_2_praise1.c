/*************************************************************************
	> File Name: 4_2_praise1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 02:57:43 PM CST
 ************************************************************************/

#include <stdio.h>

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}
