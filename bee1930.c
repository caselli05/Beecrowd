#include <stdio.h>
 
int main() {
    int t[4];
    scanf("%d %d %d %d", &t[0], &t[1], &t[2], &t[3]);
    int devices = t[0];
    
    for(int i = 1; i < 4; i++){
        devices--;
        devices += t[i];
    }
    
    printf("%d\n", devices);
 
    return 0;
}