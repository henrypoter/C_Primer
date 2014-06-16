/*************************************************************************
	> File Name: 7_8_paint.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 10:27:25 PM CST
 ************************************************************************/

#include <stdio.h>

#define COVERAGE 200

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (1 == scanf("%d", &sq_feet))
    {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit): \n");
    }

    return 0;
}
