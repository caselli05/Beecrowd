#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    int n;
    scanf("%d\n", &n);
    while(n != 0){
        int longest = 0;
        char words[n][50];
        for(int i = 0; i < n; i++){
            gets(words[i]);
            if(strlen(words[i]) > longest){
                longest = strlen(words[i]);
            }
        }
        for(int i = 0; i < n; i++){
            for(int j = 0, k = (longest-strlen(words[i])); j < k; j++){
                printf(" ");
            }
            printf("%s\n", words[i]);
        }
        printf("\n");
        scanf("%d\n", &n);
    }

    return 0;
}