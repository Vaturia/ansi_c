#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = -20;
    upper = 150;
    step = 10;

    celsius = lower;
    printf("%7s|%4s\n", "Celsius", "Fahr");
    while(celsius <= upper)
    {
        fahr = celsius * 1.8 + 32.0;
        printf("%7.0f %4.0f\n", celsius, fahr);
        celsius = celsius + step;
    }

}