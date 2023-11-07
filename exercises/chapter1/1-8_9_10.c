#include <stdio.h>

void main(){
    int c, i, nl, s, sc, t;
    i = nl = s = sc = t = 0;

    while ((c = getchar()) != EOF && i < 1000) {
        if (c == ' ') {
            s++;
        } else {
            if (s > 0) {
                putchar(' ');
                s = 0;
            }
            if (c == '\t') {
                t++;
                printf("\\t");
            } else if (c == '\n') {
                nl++;
                printf("\\n\n");
            } else if (c == '\\') {
                printf("\\\\");
            } else {
                putchar(c);
            }
        }
        ++i;
    }

    printf("\n newlines = %d, spaces = %d, tabs = %d\n\n", nl, sc, t);
}