#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main (void)
{
    int coins = 0;
    float money = 0;
    
    while (money <= 0)
    {
        money = get_float("Change owed: ");
    }
    
    int partial = round (money * 100);
    
    if (partial >= 25)
    {
        coins += (partial - (partial % 25)) / 25;
        partial = partial % 25;
    }
    if (partial >= 10)
    {
        coins += (partial - (partial % 10)) / 10;
        partial = partial % 10;
    }
    if (partial >= 5)
    {
        coins += (partial - (partial % 5)) / 5;
        partial = partial % 5;
    }
    if (partial >= 1)
    {
        coins += partial;
    }
    
    printf("%i\n", coins);
}
