/*************************************************************************
	> File Name: 4_15_input.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Wed 11 Jun 2014 11:50:26 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);
    scanf("%s", pet);
    printf("%d $%.2f %s\n", age, assets, pet);

    return 0;
}
