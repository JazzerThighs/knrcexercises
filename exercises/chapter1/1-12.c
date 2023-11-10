#include <stdio.h>

void main(){
    int c, ws;

    ws = 0;
    while ((c = getchar()) != EOF){
        /*version 1*/
        /// if (ws != 1){
        ///     if (c == '\n' || c == ' ' || c == '\t'){
        ///         ws = 1;
        ///         printf("\n");
        ///     } else {
        ///         ws = 0;
        ///         printf("%c", c);
        ///     }
        /// } else {
        ///     if (c != '\n' || c != ' ' || c != '\t'){
        ///         ws = 0;
        ///         printf("%c", c);
        ///     }
        /// }

        /*version 2*/
        if (c == '\n' || c == ' ' || c == '\t'){
            if (ws != 1){
                ws = 1;
                printf("\n");
            }
        } else {
            ws = 0;
            putchar(c);
        }
    }
}
