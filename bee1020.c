#include <stdio.h>

int main(void){
    int total_days;
    scanf("%d", &total_days);
    printf("%d ano(s)\n", total_days/365);
    total_days %= 365;
    printf("%d mes(es)\n", total_days/30);
    total_days %= 30;
    printf("%d dia(s)\n", total_days);

    return 0;
}