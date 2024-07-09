#include <stdio.h>

int main(void){
    int count_par = 0, count_impar = 0;
    int par[5], impar[5];
    for(int i = 0; i < 15; i++){
        int n;
        scanf("%d", &n);
        if(n%2 == 0){
            par[count_par] = n;
            count_par++;
        }else{
            impar[count_impar] = n;
            count_impar++;
        }
        if(count_impar == 5){
            for(int i = 0; i < 5; i++){
                printf("impar[%d] = %d\n", i, impar[i]);
            }
            count_impar = 0;
        }
        if(count_par == 5){
            for(int i = 0; i < 5; i++){
                printf("par[%d] = %d\n", i, par[i]);
            }
            count_par = 0;
        }
    }
    for(int i = 0; i < count_impar; i++){
        printf("impar[%d] = %d\n", i, impar[i]);   
    }
    for(int i = 0; i < count_par; i++){
        printf("par[%d] = %d\n", i, par[i]);
    }



    return 0;
}