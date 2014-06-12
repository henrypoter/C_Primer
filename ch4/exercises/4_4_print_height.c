/*************************************************************************
	> File Name: 4_4_print_height.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Thu 12 Jun 2014 12:46:08 AM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float height = 0.0f;
    char name[32] = {0};

    printf("Please input your height and name:\n");
    scanf("%f %s", &height, name);
    printf("%s, you are %.3f feet tall.\n", name, height / 12);
    
    return 0;
}
