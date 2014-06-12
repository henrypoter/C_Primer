/*************************************************************************
	> File Name: 4_5_print_name.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 10:56:57 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[32] = {0};
    char last_name[32] = {0};

    printf("Please input your first_name and last_name:\n");
    scanf("%s %s", first_name, last_name);
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", strlen(first_name), strlen(first_name),
            strlen(last_name), strlen(last_name));
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", strlen(first_name), strlen(first_name),
            strlen(last_name), strlen(last_name));

    return 0;
}
