#include <stdio.h>

int main(void){
    int cash;
    double tmp;
    int notas[] = {100, 50, 20, 10, 5, 2};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    scanf("%lf", &tmp);
    cash = tmp;
    tmp -= cash;
    tmp = tmp*100;

    int coins = tmp;

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d nota(s) de R$ %d.00\n", (cash/notas[i]), notas[i]);
        cash = cash%notas[i];
    }
    coins += cash*100;

    printf("MOEDAS:\n");
    for(int i = 0; i < 6; i++){
        printf("%d moeda(s) de R$ %.2f\n", (coins/moedas[i]), moedas[i]/100.0);
        coins = coins%moedas[i];
    }




    return 0;
}