/*************************************************************************
	> File Name: 11_5_name2.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 17:26:11 2014
 ************************************************************************/

#include <stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    char * ptr;

    printf("Hi, what's your name?\n");
    ptr = gets(name);
    printf("%s?Ah! %s!\n", name, ptr);

    return 0;
}
