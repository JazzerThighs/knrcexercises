#include <stdio.h>

int main(){
    char og_input[11];
    int c, num_digits;
    long long value = 0;
    num_digits = 0;

    while ((c = getchar()) != EOF && c != '\n' && num_digits < 11){
        if (c >= '0' && c <= '9'){
            og_input[num_digits++] = c;
        } else {
            printf("invalid character, NaN\n");
            return 0;
        }
    }
    og_input[num_digits] = '\0';

    for (int i = 0; i < num_digits; i++){
        value = value * 10 + (og_input[i] - '0');
    }

    printf("Input Integer => %d\n", value);
    double float_cast = (double)value;
    for (int j = 1; j < 11; j++){
        value = *(long long*)&float_cast;
        printf("#%2d: Value -> Float -> Cast as Int => %lld\n", j, value);
        float_cast = value;
    }
    return 0;
}