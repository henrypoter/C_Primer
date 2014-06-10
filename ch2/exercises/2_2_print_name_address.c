/*************************************************************************
	> File Name: 2_2_print_name_address.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Tue 10 Jun 2014 03:13:35 PM CST
 ************************************************************************/
/*
 *功能：输出姓名和地址
 */
#include <stdio.h>

int main(void)
{
    char name[] = "Hui Wang";
    char addr[] = "Qinglong Road, Longhua New Zone, Shenzhen, Guangdong Province, China";

    printf("Name: %s\n", name);
    printf("Address: %s\n", addr);

    return 0;
}
