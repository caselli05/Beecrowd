#include <stdio.h>


int main(void){
    double n[3];
    scanf("%lf %lf %lf", &n[0], &n[1], &n[2]);

    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 3; j++){
            if(n[i] < n[j]){
                double tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }

    double a = n[0];
    double b = n[1];
    double c = n[2];

    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(a*a == (b*b + c*c)){
        printf("TRIANGULO RETANGULO\n");
    }
    else if(a*a > (b*b + c*c)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else{
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b && b==c){
        printf("TRIANGULO EQUILATERO\n");
    }
    else if(a==b || b==c){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    
    return 0;
}