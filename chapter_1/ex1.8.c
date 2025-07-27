#include <stdio.h>

int main ()
{
    long count_spaces = 0, count_tabs = 0, count_strings = 0;
    int c;

    while((c = getchar()) != EOF)
    {
        if(c == ' ') 
        {
            ++count_spaces;
        }
        else if(c == '\t')
        {
            ++count_tabs;
        }
        else if(c == '\n')
        {
            ++count_strings;
        }
    }
    printf("Spaces: %ld; Tabs: %ld; New_str: %ld\n", count_spaces, count_tabs, count_strings);
}