#include <stdio.h>

int main(void){
    int total;
    scanf("%d", &total);
    if(total <= 10){
        printf("7\n");
    }else if(total <= 30){
        printf("%d\n", (total-10)+7);
    }else if(total <= 100){
        printf("%d\n", (total-30)*2+27);
    }else{
        printf("%d\n", (total-100)*5+167);
    }


    return 0;
}