    #include <stdio.h>
    #include <math.h>
 
    int main() {
        int n;
        scanf("%d", &n);
        while(n != 0){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    int num = abs(i - j)+1;
                    int lg = floor(log10(num))+1;
                    for(int k = 0; k < 3-lg; k++){
                        printf(" ");
                    }
                    printf("%d", num);
                    if(j != n-1){
                        printf(" ");
                    }
                }
                printf("\n");
            }
            scanf("%d", &n);
            printf("\n");
        }
        return 0;
    }

