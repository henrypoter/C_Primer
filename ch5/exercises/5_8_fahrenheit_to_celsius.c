/*************************************************************************
  > File Name: 5_8_fahrenheit_to_celsius.c
  > Author: Hui Wang
  > Mail: ncepuwanghui@gmail.com 
  > Created Time: Thu 12 Jun 2014 09:38:36 PM CST
 ************************************************************************/

#include <stdio.h>

void Temperatures(double temperature);

int main(void)
{
    double temperature = 0.0;

    printf("Please input Fahrenheit(Enter 'q' or other non-num to quit): ");
    while (scanf("%lf", &temperature) == 1)
    {
        Temperatures(temperature);
        printf("Please input Fahrenheit(Enter 'q' or other non-num to quit): ");
    }

    return 0;
}

void Temperatures(double temperature)
{
    const double A = 1.8f;
    const double B = 32.0f;
    const double C = 273.16;

    printf("Fahrenheit: %.2f\n", temperature);
    printf("Celsius: %.2f\n", A * temperature + B);
    printf("Kelvin: %.2f\n", A * temperature + B + C);
}
