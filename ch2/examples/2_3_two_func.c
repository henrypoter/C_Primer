/*************************************************************************
	> File Name: 2_3_two_func.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 02:57:17 PM CST
 ************************************************************************/
/*
 * 功能：在一个文件中使用两个函数
 */
#include <stdio.h>

void butler(void);//ISO/ANSI C函数原型

int main(void)
{
    printf("I will summon  the butler function.\n");
    butler();
    printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

    return 0;
}

void butler(void)
{
    printf("You rang, sir?\n");
}
