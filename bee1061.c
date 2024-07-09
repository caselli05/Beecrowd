#include <stdio.h>
#include <stdlib.h>

 
int main() {
    char* d1 = malloc(4*sizeof(char));
    char* d2 = malloc(4*sizeof(char));
    char dot = ':';
    int day1, day2, h1, h2, min1, min2, sec1, sec2;
    scanf("%s %d %d %c %d %c %d", d1, &day1, &h1, &dot, &min1, &dot, &sec1);
    scanf("%s %d %d %c %d %c %d", d2, &day2, &h2, &dot, &min2, &dot, &sec2);

    int t_days, t_h, t_min, t_sec;
    if(sec1 > sec2){
        min2--;
        t_sec = 60+sec2-sec1;
    }
    else{
        t_sec = sec2 - sec1;
    }

    if(min1 > min2){
        h2--;
        t_min = 60+min2-min1;
    }
    else{
        t_min = min2 - min1;
    }

    if(h1 > h2){
        day2--;
        t_h = 24+h2-h1;
    }
    else{
        t_h = h2 - h1;
    }

    t_days = day2 - day1;

    printf("%d dia(s)\n", t_days);
    printf("%d hora(s)\n", t_h);
    printf("%d minuto(s)\n", t_min);
    printf("%d segundo(s)\n", t_sec);

    return 0;
}