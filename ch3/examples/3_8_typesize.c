/*************************************************************************
	> File Name: 3_8_typesize.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 10:55:48 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    printf("Type int has a size of %u bytes.\n", sizeof(int));
    printf("Type char has a size of %u bytes.\n", sizeof(char));
    printf("Type long has a size of %u bytes.\n", sizeof(long));
    printf("Type double has a size of %u bytes.\n", sizeof(double));
    printf("Type float has a size of %zd bytes.\n", sizeof(float));

    return 0;
}
