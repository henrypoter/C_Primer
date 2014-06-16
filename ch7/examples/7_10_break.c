/*************************************************************************
	> File Name: 7_10_break.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Mon 16 Jun 2014 10:40:49 PM CST
 ************************************************************************/

#include <stdio.h>

int main(void)
{
    float length, width;
    
    printf("Enter the length of the rectangle: \n");
    while (1 == scanf("%f", &length))
    {
        printf("Length = %0.2f: \n", length);
        printf("Enter its width: \n");
        if (1 != scanf("%f", &width))
        {
            break;
        }
        printf("Width = %0.2f: \n", width);
        printf("Area = %0.2f: \n", length * width);
        printf("Enter the length of the rectangle: \n");
    }
    printf("Done.\n");

    return 0;
}
