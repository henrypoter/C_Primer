/*************************************************************************
	> File Name: 4_6_printout.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 04:46:06 PM CST
 ************************************************************************/

#include <stdio.h>

#define PI 3.141593

int main(void)
{
    int number = 5;
    float expresso = 13.5;
    int cost = 3100;
    printf("The %d CEOs drank %f cups of expresso.\n", number, expresso);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing, \n");
    printf("%c%d\n", '$', 2 * cost);

    return 0;
}
