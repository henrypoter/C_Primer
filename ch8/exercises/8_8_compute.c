/*************************************************************************
  > File Name: 8_8_compute.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Fri 20 Jun 2014 11:18:02 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>
#include <ctype.h>


char get_first(void);

int main(void)
{
    char selection, ch;
    float first = 0.0f, second = 0.0f;
    const float EPSINON = 0.000001;

    do
    {
        printf("Enter the operation of your choice:\n");
        printf("a.add\t\t\ts.subtract\n");
        printf("m.multiply\t\td.divide\n");
        printf("q.quit\n");

        selection = get_first();

        if (selection == 'q')
        {
            continue;
        }

        printf("Enter first number: ");
        __fpurge(stdin);
        while (1 != scanf("%f", &first))
        {
            while ((ch = getchar()) != '\n')
            {
                printf("%c", ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        printf("Enter second number: ");
        __fpurge(stdin);
        while (1 != scanf("%f", &second))
        {
            while ((ch = getchar()) != '\n')
            {
                printf("%c", ch);
            }
            printf(" is not an number.\n");
            printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
        }
        while (second < EPSINON)
        {
            printf("Enter a number other than 0: ");
            __fpurge(stdin);
            scanf("%f", &second);
        }

        switch (selection)
        {
            case 'a':
                printf("%.1f + %.1f = %.1f\n", first, second, first + second);
                break;
            case 's':
                printf("%.1f - %.1f = %.1f\n", first, second, first - second);
                break;
            case 'm':
                printf("%.1f * %.1f = %.1f\n", first, second, first * second);
                break;
            case 'd':
                printf("%.1f / %.1f = %.1f\n", first, second, first / second);
                break;
        }

    } while (selection != 'q');
    printf("Bye.\n");

    return 0;
}

char get_first(void)
{
    char ch;
    while ((ch = getchar()) && isspace(ch))
    {
        continue;
    }
    __fpurge(stdin);

    return ch;
}
