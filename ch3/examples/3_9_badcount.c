/*************************************************************************
	> File Name: 3_9_badcount.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:04:32 AM CST
 ************************************************************************/
/*
 *功能：测试不正确的参数个数会有什么结果
 */
#include <stdio.h>

int main(void)
{
    int f = 4;
    int g = 5;
    float h = 5.0f;
    
    printf("%d\n", f, g);
    printf("%d %d\n", f);
    printf("%d %f\n", h, g);

    return 0;
}
