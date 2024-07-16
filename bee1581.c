#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        int native = 1;
        int k;
        scanf("%d\n", &k);
        char leng[k][20];
        gets(leng[0]);
        for(int j = 1; j < k; j++){
            gets(leng[j]);
            if(strcmp(leng[0], leng[j]) != 0){
                native = 0;
            }
        }
        if(native){
            printf("%s\n", leng[0]);
        }else{
            printf("ingles\n");
        }
    }
 
    return 0;
}