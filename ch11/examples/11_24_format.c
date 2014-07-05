/*************************************************************************
	> File Name: 11_24_format.c
	> Author: Hui Wang
	> Mail: ncepuwanghui@gmail.com 
	> Created Time: Sat Jul  5 22:34:51 2014
 ************************************************************************/

#include <stdio.h>

#define MAX 20

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("Enter your first name: ");
    gets(first);
    puts("Enter your last name: ");
    gets(last);
    puts("Enter your prize money: ");
    scanf("%lf", &prize);
    sprintf(formal, "%s, %-19s: $%6.2f\n", last, first, prize);
    puts(formal);
    
    return 0;
}
