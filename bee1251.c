#include <stdio.h>
#include <string.h>
 

typedef struct Struct
{
    char c;
    int f;
}Struct;


void sort(Struct* s);

int main() {
    char s[1001];
    if(scanf("%s", s) == EOF){
        return 0;
    }

    while(1){
        Struct charsFreq[255];
        for(int i = 0; i < 255; i++){
            charsFreq[i].c = i;
            charsFreq[i].f = 0;
        }

        for(int i = 0, k =  strlen(s); i < k; i++){
            charsFreq[(int)(s[i])].f += 1;
        }

        sort(charsFreq);

        for(int i = 0; i < 255; i++){
            if(charsFreq[i].f != 0){
                printf("%d %d\n", charsFreq[i].c, charsFreq[i].f);
            }
        }
        if(scanf("%s", s) != EOF){
            printf("\n");
        }else{
            break;
        }
    }
 
    return 0;
}


void sort(Struct* s){
    for(int i = 0; i < 255; i++){
        for(int j = i+1; j < 255; j++){
            if(s[i].f > s[j].f){
                Struct tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }if(s[i].f == s[j].f){
                if(s[i].c < s[j].c){
                    Struct tmp = s[i];
                    s[i] = s[j];
                    s[j] = tmp;
                }
            }
        }
    }

    return;
}
