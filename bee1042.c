#include <stdio.h>


int main(void){
    int n[3];
    int s[3];

    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    
    s[0] = n[0];
    s[1] = n[1];
    s[2] = n[2];
    
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(s[i] > s[j]){
                int tmp = s[i];
                s[i] = s[j];
                s[j] = tmp;
            }
        }
    }
    printf("%d\n%d\n%d\n", s[0], s[1], s[2]);
    printf("\n%d\n%d\n%d\n", n[0], n[1], n[2]);
    
    
    return 0;
}