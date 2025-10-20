#include  <stdio.h>
 int main(){
    int lim = 10;
    int i = 0;
    while(1){
        int c = getchar();
        
        if (i > lim -1) {break;}
        if (c == '\n'){break;}
        if (c == EOF){break;}
        i++;
    }
    return 0;
}