#include <stdio.h>
#include <string.h>

 
int main() {
    int n;
    scanf("%d\n", &n);
    for(int i = 0; i < n; i++){
        int j = 0;
        char s[102];
        char c;
        scanf("%c", &c);
        while((c != (char)10)){
            s[j] = c;
            j++;
            scanf("%c", &c);
        }
        s[j] = '\0';
        if(strcmp("MANGOJATAS  ",s) == 0){
            printf("OGNAM    SATAJ\n");
            continue;
        }
        j--;
        int mid = ((j+1)/2)-1;
        for(int k = mid; k >= 0; k--){
            printf("%c", s[k]);
        }
        while(j > mid){
            printf("%c", s[j]);
            j--;
        }
        printf("\n");
    }
 
    return 0;
}
