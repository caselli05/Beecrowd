#include <stdio.h>

int main(void){
    double s;
    scanf("%lf", &s);

    double i=0;

    if(s <= 2000.00){
        //insento
        s = s;
        printf("Isento\n");
        return 0;
    }
    else if(s <= 3000.00){
        //8%
        s -= 2000;
        i += s*0.08;
    }
    else if(s <= 4500.00){
        //18%
        s -= 2000;
        i += 1000*0.08;
        s -= 1000;
        i += s*0.18;

    }
    else{
        //28%
        s -= 2000;
        i += 1000*0.08;
        s -= 1000;
        i += 1500*0.18;
        s -= 1500;
        i += s*0.28;
    }
    

    printf("R$ %.2lf\n", i);
    
    return 0;
}
