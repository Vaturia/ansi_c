#include <stdio.h>

#define MAX_COUNT_SYMBOLS 20

int main()
{
    int words[MAX_COUNT_SYMBOLS + 1] = {0}, c, length_word = 0;
    int max_count_word = 0;

    while((c = getchar()) != EOF)
    {
        if(c != '\n' && c != '\t' && c != ' ' && c != ',' && c != '.') 
        {
            ++length_word;

        }
        else
        {
            if(length_word > 20)
            {
                ++words[20];
            }
            else
            {

                ++words[length_word - 1];
            }

            length_word = 0;
        }
    }
    ++words[length_word - 1];
    for(int i = 0; i < MAX_COUNT_SYMBOLS + 1; ++i)
    {
        if(words[i] > max_count_word)
            max_count_word = words[i];
    }

    for(int i = 0; i < max_count_word ; ++i)
    {
        for(int j = 0; j < MAX_COUNT_SYMBOLS + 1; ++j)
        {

            if(words[j] >= (max_count_word - i ))
            {
                printf("%c ", '*');
            }
            else
            {
                printf("%c ", ' ');
            }
          
        }
        printf("%c", '\n');
    }
    for(int i = 0; i < MAX_COUNT_SYMBOLS + 1; ++i)
    {

        if(i == 20)
        {
            printf(">%d", i);
        }
        else
            printf("%d ", i + 1);
    }
    printf("%c", '\n');

}