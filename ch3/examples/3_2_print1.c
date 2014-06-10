/*************************************************************************
	> File Name: 3_2_print1.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 05:20:02 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    printf("%d minus %d is %d\n", ten, 2, ten - two);
    printf("Doing it wrong: ");
    //printf("%d minus %d is %d\n", ten);//错误写法，编译不通过

	return 0;
}
