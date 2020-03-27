#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h = get_int("Height: \n");

    for (int i = h; i >= 0; i--)
    {
        for (int spaces = 0; spaces < i; spaces++)
            printf(" ");
        for (int bricks = 0; bricks < (h - i); bricks++)
            printf("#");

        printf("  ");
        
        for (int bricks = 0; bricks < (h - i); bricks++)
            printf("#");
        
        printf("\n");
    }
}
