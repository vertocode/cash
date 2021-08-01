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
    while (d > 0)
    {
        if (d >= 25)
        {
            d = d - 25;
        }
        else if (d >= 10)
        {
            d = d - 10;
        }
        else if (d >= 5)
        {
            d = d - 5;
        }
        else
        {
            d = d - 1;
        }
        n++;
    }

    //print result
    printf("%i\n", n);
}