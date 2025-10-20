/* comprime: deleta todos os c de s */
void comprime (char s1[], char s2[]){
    int i,j,k,count;
    for(i = k = 0; s1[i] != '\0'; i++){
     count = 0;
        for (j =0; s2[j] != '\0';j++){
            if(s1[i] == s2[j]) {count++;}
        }
        if(count == 0){
            s1[k] = s1[i];
            k++;
        }
        }
        s1[k] = '\0';
    }

