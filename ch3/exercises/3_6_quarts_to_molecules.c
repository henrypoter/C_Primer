/*************************************************************************
	> File Name: 3_6_quarts_to_molecules.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 02:25:57 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float f = 0.0f;

    printf("Please input how much quarts the water is: ");
    scanf("%f", &f);
    printf("%f quarts water has %e molecules.\n", f, f * 950 / 3.0e-23);

    return 0;
}
