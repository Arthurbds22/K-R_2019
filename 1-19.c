#include <stdio.h>
#define MAXLINHA 1000  // tamanho máximo da linha

int lelinha(char s[], int lim);

/* remove espaços e tabs do fim e ignora linhas vazias */
int main(void) {
    char linha[MAXLINHA];
    int tam;

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        int i = tam - 1;

        
        while (i >= 0 && (linha[i] == ' ' || linha[i] == '\t' || linha[i] == '\n')) {
            i--;
        }

        if (i >= 0) { 
            linha[i + 1] = '\n'; 
            linha[i + 2] = '\0'; 
        }
        
        for (int k=i; k>=0;k--){
            putchar(linha[k]);
        }
        putchar('\n');
       
    }
    return 0;
}


int lelinha(char s[], int lim) {
    int c, i = 0, len = 0;

    while ((c = getchar()) != EOF && c != '\n') {
        if (i < lim - 1) {
            s[i++] = c;
        }
        ++len;
    }

    if (c == '\n') {
        if (i < lim - 1)
            s[i++] = c;
        ++len;
    }

    s[i] = '\0';
    return len;
}
