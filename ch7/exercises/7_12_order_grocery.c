/*************************************************************************
  > File Name: 7_12_order_grocery.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Tue 17 Jun 2014 11:29:37 PM CST
 ************************************************************************/

#include <stdio.h>
#include <stdio_ext.h>

int main(void)
{
    const float ARTICHOKE = 1.25f;
    const float BEET = 0.65f;
    const float CARROT = 0.89f;
    const float DISCOUNT_LIMIT = 100.0f;
    const float DISCOUNT_RATE = 0.05f;
    const float FREIGHT_LIMIT1 = 5.0f;
    const float FREIGHT_FEE1 = 3.50f;
    const float FREIGHT_LIMIT2 = 20.0f;
    const float FREIGHT_FEE2 = 10.00f;
    const float FREIGHT_FEE3 = 8.0f;
    const float FREIGHT_RATE = 0.1f;

    float artichoke = 0.0f, beet = 0.0f, carrot = 0.0f;
    float fee = 0.0f, discount = 0.0f, freight = 0.0f;
    float weight = 0.0f;
    char choice = 0;

    do
    {
        printf("Please select your vegetable:\n");
        printf("\ta)artichoke,price(per pound):$%.2f\n", ARTICHOKE);
        printf("\tb)beet,price(per pound):$%.2f\n", BEET);
        printf("\tc)carrot,price(per pound):$%.2f\n", CARROT);
        printf("q)quit\n");
        __fpurge(stdin);
        scanf("%c", &choice);
        if (choice == 'q')
        {
            break;
        }
        if (choice != 'a' && choice != 'b' && choice != 'c')
        {
            continue;
        }
        printf("How many pounds do you want?:");
        __fpurge(stdin);
        while (0 == scanf("%f", &weight))
        {
            printf("Invalid input! Try again.\n");
            __fpurge(stdin);
        }
        switch (choice)
        {
            case 'a':
                artichoke = weight;
                break;
            case 'b':
                beet = weight;
                break;
            case 'c':
                carrot = weight;
                break;
        }
    } while (choice != 'q');

    fee = ARTICHOKE * artichoke + BEET * beet + CARROT * carrot;
    if (fee > DISCOUNT_LIMIT)
    {
        discount = fee * DISCOUNT_RATE;
    }
    weight = artichoke + beet + carrot;
    if (weight > 0)
    {
        if (weight <= FREIGHT_LIMIT1)
        {
            freight = FREIGHT_FEE1;
        }
        else if (weight <= FREIGHT_LIMIT2)
        {
            freight = FREIGHT_FEE2;
        }
        else
        {
            freight = FREIGHT_FEE3 + weight * FREIGHT_RATE;
        }
    }
    fee = fee - discount + freight;

    printf("%10s%10s%10s%10s\n", "", "artichoke", "beet", "carrot");
    printf("%10s%10.2f%10.2f%10.2f\n", "price", ARTICHOKE, BEET, CARROT);
    printf("%10s%10.2f%10.2f%10.2f\n", "pound", artichoke, beet, carrot);
    printf("%10s%10.2f%10.2f%10.2f\n", "charge", ARTICHOKE * artichoke, BEET * beet, CARROT * carrot);
    printf("discount: %.2f\n", discount);
    printf("freight: %.2f\n", freight);
    printf("total fee: %.2f\n", fee);

    return 0;
}
