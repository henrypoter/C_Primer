/*************************************************************************
	> File Name: 11_7_scan_str.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 17:34:24 2014
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("Please enter 2 names.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("I read the %d names %s and %s.\n", count, name1, name2);

    return 0;
}
