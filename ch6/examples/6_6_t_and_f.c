/*************************************************************************
	> File Name: 6_6_t_and_f.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Fri 13 Jun 2014 12:51:52 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int true_val, false_val;

    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d\n", true_val, false_val);

    return 0;
}
