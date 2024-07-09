#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int c[3];
    scanf("%d %d %d", &c[0], &c[1], &c[2]);
    
    if((c[0]==c[1]) || (c[0]==c[2]) || (c[1] == c[2])){
        printf("S\n");
        return 0;
    }

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(c[i] < c[j]){
                int tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }
        }
    }

    if(c[0] == c[1]+c[2]){
        printf("S\n");
    }
    else{
        printf("N\n");
    }

    return 0;
}