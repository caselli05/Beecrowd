#include <stdio.h>
#include <string.h>
 
int main() {
    char s[51];
    scanf("%s", s);
    char v[51];
    int idx = 0;
    for(int i = 0, k = strlen(s); i < k; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
            v[idx] = s[i];
            idx++;
        }
    }
    idx--;
    int i = 0;
    while(i < idx){
        if(v[i] != v[idx]){
            printf("N\n");
            return 0;
        }
        i++;
        idx--;
    }
    printf("S\n");


    return 0;
}