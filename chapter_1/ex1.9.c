#include <stdio.h>

int main()
{
    int c, s;

    s = 0;
    while((c = getchar()) != EOF)
    {
        if(c != ' ')
        {
            s = 0;
        }
        if(c == ' ')
        {
            ++s;
        }
        if(s < 2)
        {
            putchar(c);
        }

    }
}