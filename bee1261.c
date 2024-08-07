#include <stdio.h>
#include <string.h>

typedef struct Adjectives
{
    char word[100];
    int value;
}Adjectives;

 
int main() {
    int k, n;
    scanf("%d %d", &k, &n);
    Adjectives adjective[k];
    for(int i = 0; i < k; i++){
        char s[100];
        int num;
        scanf("%s %d", s, &num);
        strcpy(adjective[i].word, s);
        adjective[i].value = num;
    }
    for(int i = 0; i < n; i++){
        int salary = 0;
        char text[101];
        scanf("%s ", text);
        while(strcmp(text, ".") != 0){
            for(int j = 0; j < k; j++){
                if(strcmp(text, adjective[j].word) == 0){
                    salary += adjective[j].value;
                    break;
                }
            }

            scanf("%s ", text);
        }
        printf("%d\n", salary);
    }

    return 0;
}