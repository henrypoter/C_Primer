/*************************************************************************
	> File Name: 11_6_name3.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 17:28:59 2014
 ************************************************************************/

#include <stdio.h>

#define MAX 81

int main(void)
{
    char name[MAX];
    char * ptr;

    printf("Hi, what's your name?\n");
    ptr = fgets(name, MAX, stdin);
    printf("%s? Ah! %s!\n", name, ptr);

    return 0;
}
