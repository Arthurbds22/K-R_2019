#include <stdio.h>
#define MAXLINHA 1000  // tamanho máximo da linha
#define TABSTOP 8.

int lelinha(char s[], int lim);


int main(void) {
    char linha[MAXLINHA];
    int tam;

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        int tabs = 8;
        int cols = 0;

        for (int i = 0; i < tam; i++) {
            char c = linha[i];

            if (c == '\t') {
                int spaces = tabs - (cols % tabs);
                for (int s = 0; s < spaces; s++) {
                    putchar(' ');
                    cols++;
                }
            } else if (c == '\n') {
                putchar('\n');
                cols = 0;
            } else {
                putchar(c);
                cols++;
            }
        }
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
