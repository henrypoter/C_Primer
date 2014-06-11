/*************************************************************************
	> File Name: 4_3_praise2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 03:07:57 PM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

#define PRAISE "What a super marvelous name!"

int main(void)
{
    char name[40];

    printf("What's your name?\n");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    printf("Your name of %d letters occupies %d memory cells.\n",
            strlen(name), sizeof(name));
    printf("The phrase of praise has %d letters ",
            strlen(PRAISE));
    printf("and occupies %d memory cells.\n", sizeof(PRAISE));

    return 0;
}
