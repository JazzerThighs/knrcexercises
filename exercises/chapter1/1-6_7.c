#include <stdio.h>
void main() {
    int c;

    while ((c = getchar()) != EOF)
        putchar(c);

    printf("%d", (getchar() != EOF));

    printf("\n\n%d %x %c", EOF, EOF, EOF);
}