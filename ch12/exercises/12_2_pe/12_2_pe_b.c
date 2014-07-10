/*************************************************************************
	> File Name: 12_2_pe_b.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 10 Jul 2014 09:40:20 AM CST
 ************************************************************************/

#include <stdio.h>
#include "12_2_pe_a.h"

int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while (mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode(-1 to quit): ");
        scanf("%d", &mode);
    }
    printf("Done.\n");

    return 0;
}
