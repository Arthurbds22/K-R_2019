#include <stdio.h>

#define MAXLEN 10

int main(void) {
    int count[MAXLEN + 1] = {0};
    int c, len = 0;

    while (1) {
        c = getchar();
        
        if (c == ' ' || c == '\n' || c == '\t' || c == EOF) {
            if (len > 0) {
                if (len > MAXLEN) len = MAXLEN;
                count[len]++;
                len = 0;
            }
            if (c == EOF) break;  
        } else {
            len++;
        }
    }

    for (int i = 1; i <= MAXLEN; i++) {
        printf("%d| ", i);
        for (int j = 0; j < count[i]; j++) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
