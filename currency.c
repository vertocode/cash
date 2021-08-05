#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    //enter a value
    float d;
    do
    {
        d = get_float("Change owed: ");
    }
    while (d <= 0);

    //applying calculation
    d = round(d * 100);
    int n = 0;
    int n25 = 0;
    int n10 = 0;
    int n5 = 0;
    int n1 = 0;
    while (d > 0)
    {
        if (d >= 25)
        {
            d = d - 25;
            n25++
        }
        else if (d >= 10)
        {
            d = d - 10;
            n10++
        }
        else if (d >= 5)
        {
            d = d - 5;
            n5++
        }
        else
        {
            d = d - 1;
            n1++
        }
        n++;
    }

    //print result
    printf("amount of coins: %i\n", n);
    if(n25 >= 1)
    {
        printf("\n 25 cents used: %i\n", n25);
    }
    if(n10 >= 1)
    {
        printf("\n 10 cents used: %i\n", n10);
    }
    if(n5 >= 1)
    {
        printf("\n 5 cents used: %i\n", n5);
    }
    if(n1 >= 1)
    {
        printf("\n 1 cents used: %i\n", n1);
    }
}
