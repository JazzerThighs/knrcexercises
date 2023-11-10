#include <stdio.h> 
/* horizontal histogram lengths of words */
void main(){
    int c, len, ws;
    int freq[25];

    for (int i = 0; i < 25; i++)
        freq[i] = 0;

    len = 0;
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c == '\n'){
            if (len != 0){
                freq[len]++;
                len = 0;
            }
            if (c == '\n')
                break;
        } else {
            len++;
            ws = 0;
        }
    }

    printf("Word Length Histogram:\n");
    for (int i = 1; i < 25; i++){
        printf("%2d: ", i);
        for (int j = 0; j < freq[i]; j++){
            printf("~");
        }
        printf("\n");
    }
}
