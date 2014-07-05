/*************************************************************************
	> File Name: 11_27_repeat.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 22:56:44 2014
 ************************************************************************/

#include <stdio.h>

int main(int argc, char * argv[])
{
    int count;

    printf("The command line has %d arguments: \n", argc - 1);
    for (count = 1; count < argc; count++)
    {
        printf("%d: %s\n", count, argv[count]);
    }
    printf("\n");

    return 0;
}
