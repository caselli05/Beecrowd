#include <stdio.h>
#include <math.h>

void num100(int amount, int num);
void num50(int amount, int num);
void num20(int amount, int num);
void num10(int amount, int num);
void num5(int amount, int num);
void num2(int amount, int num);
void num1(int amount, int num);

int main(void){
    int amount;
    scanf("%d", &amount),
    
    printf("%d\n", amount);
    num100(amount, 0);

    

    return 0;
}

void num100(int amount, int num){
    if(amount >= 100){
        amount -= 100;
        num++;
        num100(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 100,00\n", num);
        num50(amount, 0);
    }
    return;
}
void num50(int amount, int num){
    if(amount >= 50){
        amount -= 50;
        num++;
        num50(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 50,00\n", num);
        num20(amount, 0);
    }
    return;
}
void num20(int amount, int num){
    if(amount >= 20){
        amount -= 20;
        num++;
        num20(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 20,00\n", num);
        num10(amount, 0);
    }
    return;
}
void num10(int amount, int num){
    if(amount >= 10){
        amount -= 10;
        num++;
        num10(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 10,00\n", num);
        num5(amount, 0);
    }
    return;
}
void num5(int amount, int num){
    if(amount >= 5){
        amount -= 5;
        num++;
        num5(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 5,00\n", num);
        num2(amount, 0);
    }
    return;
}
void num2(int amount, int num){
    if(amount >= 2){
        amount -= 2;
        num++;
        num2(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 2,00\n", num);
        num1(amount, 0);
    }
    return;
}
void num1(int amount, int num){
    if(amount >= 1){
        amount -= 1;
        num++;
        num1(amount, num);
    }
    else{
        printf("%d nota(s) de R$ 1,00\n", num);
    }
    return;
}