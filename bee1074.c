#include <stdio.h>

 
int main() {
    int k;
    scanf("%d", &k);

    for(int i = 0; i < k; i++){
        int n;
        scanf("%d", &n);

        if(n == 0){
            printf("NULL\n");
        }
        else if(n%2 == 0){
            printf("EVEN ");
        }
        else{
            printf("ODD ");
        }

        if(n > 0){
            printf("POSITIVE\n");
        }
        else if(n < 0){
            printf("NEGATIVE\n");
        }
    }

    return 0;
}