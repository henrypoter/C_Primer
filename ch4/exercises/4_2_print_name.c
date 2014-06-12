/************************************************************************* > File Name: 4_2_print_name.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 12:30:55 AM CST
 ************************************************************************/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char first_name[32];

    printf("Input your first name: ");
    scanf("%s", first_name);
    printf("\"%s\"\n", first_name);
    printf("\"%20s\"\n", first_name);
    printf("\"%-20s\"\n", first_name);
    printf("\"%*s\"\n", strlen(first_name) + 3, first_name);

    return 0;
}
