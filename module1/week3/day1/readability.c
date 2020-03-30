#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include <ctype.h>

int main(void)
{
    string str = get_string("Text: \n");
    
    int letters = 0;
    int words = 0;
    int sentences = 0;
    
    for (int i = 0; i <= strlen(str); i++)
    {
        if (isalnum(str[i])
            letters++;
        else if (isblank(str[i]))
            words++;
        else if (ispunct(str[i])
            sentences++;
    }
    
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;
    
    float index = round (0.0588 *  L - 0.296 * S - 15.8);
    
    if (index < 1)
        printf("Before Grade 1\n");
    else if (index > 1 && index < 16)
        printf("Grade %i\n", (int) index);
    else if (index >= 16)
        printf("Grade 16\n");
}
