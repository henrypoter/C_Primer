/*************************************************************************
	> File Name: 4_1_print_name.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 12:27:03 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char first_name[32];
    char last_name[32];

    printf("Input your name(like Jack Smith): ");
    scanf("%s %s", first_name, last_name);
    printf("%s, %s\n", first_name, last_name);

    return 0;
}
