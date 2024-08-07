#include <stdio.h>
#include <string.h>
#include <ctype.h>
 

typedef struct Struct
{
    char c;
    int f;
}Struct;


void sort(Struct* s);

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    for(int i = 0; i < n; i++){
        char s[201];
        gets(s);
        Struct charsFreq[255];
        for(int i = 0; i < 255; i++){
            charsFreq[i].c = i;
            charsFreq[i].f = 0;
        }

        for(int i = 0, k =  strlen(s); i < k; i++){
            if(isalpha(s[i])){
                s[i] = tolower(s[i]);
                charsFreq[(int)(s[i])].f += 1;
            }
        }

        sort(charsFreq);

        for(int i = 0; i < 255; i++){
            if(charsFreq[i].f == charsFreq[0].f){
                printf("%c", charsFreq[i].c);
            }
        }

        printf("\n");
    }
 
    return 0;
}


void sort(Struct* s){
    for(int i = 0; i < 255; i++){
        for(int j = i+1; j < 255; j++){
            if(s[i].f < s[j].f){
                Struct tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }else if(s[i].f == s[j].f){
                if(s[i].c > s[j].c){
                    Struct tmp;
                    s[i] = s[j];
                    s[j] = tmp;
                }
            }
        }
    }
}