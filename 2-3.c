#include <stdio.h>


int htoi(const char s[]) {
    int i = 0;
    int resultado = 0;

    
    while (s[i] == ' ' || s[i] == '\t' || s[i] == '\n') {
        i++;
    }

    
    if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X')) {
        i += 2;
    }

    
    while (s[i] != '\0') {
        int valor;
        if (s[i] >= '0' && s[i] <= '9') {
            valor = s[i] - '0';
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            valor = 10 + (s[i] - 'a');
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            valor = 10 + (s[i] - 'A');
        } else {
            break; // achou inválido, sai
        }
        resultado = resultado * 16 + valor;
        i++;
    }

    return resultado;
}

/* Testes automatizados */
#ifdef TESTA_HTOI
int main(void) {
    struct {
        const char *s;
        int esperado;
    } testes[] = {
        {"0", 0},
        {"7f", 0x7f},
        {"0x7f", 0x7f},
        {"0X7F", 0x7f},
        {"deadbeef", 0xDEADBEEF},
        {"0xDEADBEEF", 0xDEADBEEF},
        {"   1a3", 0x1A3},
        {"0x", 0},
        {"123g", 0x123},
        {"xyz", 0},
    };

    for (int i = 0; i < (int)(sizeof(testes) / sizeof(testes[0])); i++) {
        int r = htoi(testes[i].s);
        if (r == testes[i].esperado) {
            printf("✅ htoi(\"%s\") = %d (0x%X)\n", testes[i].s, r, r);
        } else {
            printf("❌ htoi(\"%s\") = %d (0x%X), esperado %d (0x%X)\n",
                   testes[i].s, r, r, testes[i].esperado, testes[i].esperado);
        }
    }
    return 0;
}
#endif
