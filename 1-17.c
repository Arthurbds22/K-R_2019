#include <stdio.h>
#define MAXLINHA 1000 //tamanho máximo da linha entrada

int lelinha (char linha [], int maxlinha);
void copia (char para[], char de[]);

/* imprime maior linha entrada */
int main(void) {
    int tam;            // tamanho atual da linha
    int max = 0;        // tamanho máximo visto até agora
    char linha[MAXLINHA];    // linha atual
    char maior[MAXLINHA];    // maior linha guardada

    while ((tam = lelinha(linha, MAXLINHA)) > 0) {
        if (tam > 80) {
            printf("%s\n", linha);
        }
    }
   
    return 0;
}

/* lelinha: lê uma linha em s, retorna tamanho */
int lelinha (char s[], int lim) {
    int c;
    int i = 0;
    int len = 0;

    while ((c = getchar()) != EOF && c != '\n'){
        if(i <lim-1) {
            s[i] = c;
            i++;}
        
        ++len;
    }

    if (c == '\n'){
        if (i< lim-1){
            s[i]=c;
            i++;
        }
    }

    s[i] = '\0';
    return len;
}


