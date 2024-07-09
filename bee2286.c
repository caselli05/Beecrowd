#include <stdio.h>

int main(void){
    int test = 1;
    int n;
    scanf("%d", &n);
    while(n != 0){
        printf("Teste %d\n", test);
        test++;
        char name0[11], name1[11];
        scanf("%s %s", name0, name1);
        for(int i = 0; i < n; i++){
            int num1, num2;
            scanf("%d %d", &num1, &num2);
            if((num1+num2)%2 == 0){
                printf("%s\n", name0);
            }else{
                printf("%s\n", name1);
            }
        }
        printf("\n");
        scanf("%d", &n);
    }


    return 0;
}