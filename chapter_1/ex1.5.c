#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int main()
{
    int fahr;

    printf("%4s|%7s\n", "Fahr", "Celsius");
    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        printf("%4d %7.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));
    }
}