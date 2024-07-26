#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d\n", &n);
    char words[n][101];
    for(int i = 0; i < n; i++){
        gets(words[i]);
    }
    int k;
    scanf("%d\n", &k);
    for(int i = 0; i < k; i++){
        int count = 0;
        int max_len = -1;
        char search[101];
        gets(search);
        for(int j = 0; j < n; j++){
            if(strlen(search) > strlen(words[j])){
                continue;
            }
            int ok = 1;
            int search_len = strlen(search);
            for(int a = 0; a < search_len; a++){
                if(search[a] != words[j][a]){
                    ok = 0;
                    break;
                }
            }
            if(ok){
                count++;
                int word_len = strlen(words[j]);
                if(max_len < word_len){
                    max_len = word_len;
                }
            }
        }
        if(count == 0){
            printf("-1\n");
        }else{
            printf("%d %d\n", count, max_len);
        }
    }

    return 0;
}