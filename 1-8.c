#include <stdio.h>

int main(void){
    int espacos = 0;
    int tabs = 0;
    int nl = 0;
    int c;


   while ((c = getchar()) != EOF){
    if (c == '\n'){
        nl++;
    }

    else if (c == '\t'){
        tabs++;
    }

    else if (c == ' ') {
        espacos ++;
    }
    

   }
   printf("Tabs: %d\n",tabs);
   printf("Quebra de linhas: %d\n",nl);
   printf("Espacos: %d\n",espacos);

}