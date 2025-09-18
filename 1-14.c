// Mapeia apenas letras
#include <stdio.h>
#include <ctype.h>

#define ALPHABET 26 

int main(void){
    int count[ALPHABET] = {0};
    int c;

    while ((c = getchar()) != EOF){
        c = tolower(c);
        if (c >= 'a' && c <= 'z'){
            count[c - 'a'] ++;

                }
        }
    for (int i = 0; i < ALPHABET;i++){
        printf("%c| ",'a'+i);
        for (int j = 0;j< count[i];j++){
            putchar('*');
        }
        putchar('\n');
    }
    
    return 0;
}