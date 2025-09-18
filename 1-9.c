#include <stdio.h>
int main(void){
    int last_space = 0;
    int c;

    while((c = getchar()) != EOF){

        if (c == ' '){
            if (last_space == 0){
                putchar(' ');
                last_space = 1;
            }
        }
            
        else{
            putchar(c);
            last_space = 0;
            }
            
        
    }
    return 0;
}