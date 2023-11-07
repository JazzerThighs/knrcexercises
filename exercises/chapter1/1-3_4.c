#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
void main()
{
    float fahr, celsius;
    float lower, upper, step;
    
    lower = 0;   /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    
    printf("Fahr -> Celsius Conversion\n");
    fahr = lower;
    while (fahr <= upper)
    {
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0fF %6.1fC\n", fahr, celsius);
        fahr += step;
    }

    printf("Celsius -> Fahr Conversion\n");
    celsius = lower;
    while (celsius <= upper) {
        fahr = (celsius * (9.0 / 5.0)) + 32;
        printf("%3.0fC %6.1fF\n", celsius, fahr);
        celsius += step;
    }
}
