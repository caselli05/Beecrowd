#include <stdio.h>
#include <string.h>
 
typedef struct Strings
{
    char text[51];
    int size;
    int pos;
}Strings;




int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char c = 0;
        Strings string[50];
        int j = 0; 
        while(c != '\n'){
            scanf("%s", string[j].text);
            c = getchar();
            string[j].size = strlen(string[j].text);
            string[j].pos = j;
            j++;
        }
        for(int a = 0; a < j; a++){
            for(int b = a+1; b < j; b++){
                // printf("%s x %s = %d x %d = ", string[a].text, string[b].text, string[a].size, string[b].size);
                if(string[a].size < string[b].size){
                    Strings tmp = string[a];
                    string[a] = string[b];
                    string[b] = tmp;
                }else if(string[a].size == string[b].size){
                    if(string[a].pos > string[b].pos){
                        Strings tmp = string[a];
                        string[a] = string[b];
                        string[b] = tmp;
                    }
                }
                
            }
            if(a != j-1){
                printf("%s ", string[a].text);
            }else{
                printf("%s\n", string[a].text);
            }
        }
    }
    


    return 0;
}