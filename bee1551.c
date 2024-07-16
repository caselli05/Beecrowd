#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        char frase[1001];
        gets(frase);
        int usedLetters[26] = { 0 };
        int count = 0;
        for(int j = 0, k = strlen(frase); j < k; j++){
            if(isalpha(frase[j])){
                if(!usedLetters[tolower(frase[j])-'a']){
                    count++;
                    usedLetters[tolower(frase[j])-'a']++;
                }
            }
        }
        if(count == 26){
            printf("frase completa\n");
        }else if(count >= 13){
            printf("frase quase completa\n");
        }else{
            printf("frase mal elaborada\n");
        }
    }

    return 0;
}