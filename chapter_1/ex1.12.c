#include <stdio.h>



int main()
{
    int c, state;
    state = 0;
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t')
        {
            if(!state)
            {
                putchar('\n');
                state = 1;
            }
        }
        else
        {
            putchar(c);
            state = 0;
        }
    }
}