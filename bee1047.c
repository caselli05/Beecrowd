#include <stdio.h>
#include <math.h>


int main(void){
    int hi, mi, hf, mf;
    scanf("%d %d %d %d", &hi, &mi, &hf, &mf);


    int tmin, th;
    if(mf < mi){
        hf--;
        mf += 60;
    }
    tmin = mf-mi;

    if(hf < hi){
        hf += 24;
    }
    th = hf-hi;

    if(th == 0 && tmin == 0){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        return 0;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", th, tmin);



    return 0;
}