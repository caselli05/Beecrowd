#include <stdio.h>

int main(void){
    float s;
    int a;
    scanf("%f", &s);

    float new_s;
    if(s <= 400.00){
        //15%
        new_s = s*1.15;
        a = 15;
    }
    else if(s <= 800.00){
        //12%
        new_s = s*1.12;
        a = 12;
    }
    else if(s <= 1200.00){
        //10%
        new_s = s*1.1;
        a = 10;
    }
    else if(s <= 2000.00){
        //7%
        new_s = s*1.07;
        a = 7;
    }
    else{
        //4%
        new_s = s*1.04;
        a = 4;
    }

    printf("Novo salario: %.2lf\n", new_s);
    printf("Reajuste ganho: %.2lf\n", (new_s-s));
    printf("Em percentual: %d %%\n", a);
    
}
