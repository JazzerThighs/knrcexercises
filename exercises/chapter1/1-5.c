#include <stdio.h>
/* print Fahrenheit-Celsius table in reverse and vice versa */
void main()
{
    printf("Fahr -> Celsius Conversion\n");
    for (int fahr = 300; fahr >= 0; fahr -= 20)
        printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    
    printf("Celsius -> Fahr Conversion\n");
    for (int celsius = 300; celsius >= 0; celsius -= 20)
        printf("%3dC %6.1fF\n", celsius, ((9.0 / 5.0) * celsius) + 32);
}