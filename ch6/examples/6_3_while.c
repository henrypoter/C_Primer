/*************************************************************************
	> File Name: 6_3_while.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 12:43:07 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int n = 0;

    //错误写法如下，不管是简单语句还是复合语句都应该加花括号
    while (n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all this program does\n");
    
    //不要在while后加分号，如果确实需要加分号表示空语句，应该另起一行，明显地表示
    n = 0;
    while (n++ < 3);
        printf("n is %d\n", n);
    printf("That's all this program does\n");

    return 0;
}
