#include <stdio.h>

int main(void){
        int c;
        int control = 0;

        while((c = getchar()) != EOF){
            if (c == ' ' || c == '\t' || c == '\n'){
                if (control == 0){
                    putchar('\n');
                    control = 1;
                }

            }
            else {
                putchar(c);
                control = 0;
            }
        }
}


