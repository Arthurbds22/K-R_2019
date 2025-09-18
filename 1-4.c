#include <stdio.h>

int main(void) {
    float farh, celsius;
    int inicio, fim, control;
    inicio = 0;
    fim = 300;
    control = 20;
    celsius = inicio;

printf("|Celsius | Farh |\n");
    while(celsius <= fim){
        farh = ((9/5) * celsius) + (32);
        printf ("|%3.0f     |%6.1f|\n", celsius, farh);
        celsius += control;
    }

    return 0;


}