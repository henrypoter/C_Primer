/*************************************************************************
	> File Name: 2_2_fathm_ft.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 02:54:06 PM CST
 ************************************************************************/
/*
 * 功能：把两个fathoms(深度单位)换算成英尺
 */

#include <stdio.h>

int main(void)
{
    int feet, fathoms;

    fathoms = 2;
    feet = 6 * fathoms;
    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);

    return 0;
}
