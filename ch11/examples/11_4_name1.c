/*************************************************************************
	> File Name: 11_4_name1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 17:24:19 2014
 ************************************************************************/

#include <stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    printf("Hi, what's your name?\n");
    gets(name);
    printf("Nice name, %s.\n", name);

    return 0;
}
