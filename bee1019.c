#include <stdio.h>

int main(void){
    int t;
    scanf("%d", &t);

    printf("%d:", t/3600);
     t-= (t/3600)*3600;
     printf("%d:", t/60);
     t-= (t/60)*60;
     printf("%d\n", t);



    return 0;
}