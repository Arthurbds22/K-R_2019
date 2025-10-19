#include <stdio.h>
#define MAXLINHA 1000  // tamanho máximo da linha

int lelinha(char s[], int lim);

/* remove espaços e tabs do fim e ignora linhas vazias */
int main(void) {
    char linha[MAXLINHA];
    int tam;

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        int i = tam - 1;

        // volta ignorando espaços, tabs e quebras de linha
        while (i >= 0 && (linha[i] == ' ' || linha[i] == '\t' || linha[i] == '\n')) {
            i--;
        }

        if (i >= 0) { // tem algo além de espaços?
            linha[i + 1] = '\n'; // recoloca o '\n' no fim
            linha[i + 2] = '\0'; // fim da string
            printf("%s", linha);
        }   
        // se i < 0, a linha era vazia → ignora
    }
    return 0;
}

/* lê uma linha e retorna seu tamanho real */
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
