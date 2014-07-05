/*************************************************************************
	> File Name: 11_28_hello.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 22:59:27 2014
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    int i, times;

    if (argc < 2 || (times = atoi(argv[1])) < 1)
    {
        printf("Usage: %s positive-number\n", argv[0]);
    }
    else
    {
        for (i = 0; i < times; i++)
        {
            puts("Hello, good looking!");
        }
    }

    return 0;
}
