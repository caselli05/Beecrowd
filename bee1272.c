#include <stdio.h>
#include <string.h>
 

int main() {
    int n;
    scanf("%d\n", &n);
    char s[51];
    char r[51];
    for(int k = 0; k < n; k++){
        memset(s, 0, sizeof(s));
        memset(r, 0, sizeof(r));
        gets(s);
        int j = 0;
        int dot = 1;
        for(int i = 0, k = strlen(s); i < k; i++){
            if(s[i] == ' '){
                dot = 1;
            }else if(dot == 1){
                dot = 0;
                r[j] = s[i];
                j++;
            }
        }
        printf("%s\n", r);
    }
 
    return 0;
}

