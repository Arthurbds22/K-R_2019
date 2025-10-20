#include <stdio.h>
/* imprime a tabela de conversão Fahrenheit-Celsius
para fahr = 0, 20, 300; versão com ponto flutuante */

int cnvgr(float temp){
    int new_temp;
    new_temp =(5.0 / 9.0) * (temp - 32.0);
    return new_temp;
}
int main(void)
{
float fahr, celsius;
int inicio, fim, incr;
inicio = 0; // limite inferior da tabela
fim = 300; // limite superior
incr = 20; // incremento
fahr = inicio;
printf("|Farh|Celsius|\n");

while (fahr <= fim) {
   
    printf ("|%3.0f | %6.1f|\n", fahr, cnvgr(fahr));
    fahr = fahr + incr;
}
printf("-------------\n");
return 0;
}