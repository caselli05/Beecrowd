#include <stdio.h>

 
int main() {
    int a = 0;
    int g = 0;
    int d = 0;

    int on = 1;
    while(on == 1){
        int code;
        scanf("%d", &code);

        switch (code)
        {
        case 1:
            a += 1;
            break;
        case 2:
            g += 1;
            break;
        case 3:
            d += 1;
            break;
        case 4:
            on = 0;
            break;    
        default:
            break;
        }
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", a);
    printf("Gasolina: %d\n", g);
    printf("Diesel: %d\n", d);
    
    return 0;
}