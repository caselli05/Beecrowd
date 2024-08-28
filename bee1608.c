#include <stdio.h>
 
int main() {
    int t;
    scanf("%d", &t);

    for(int i = 0; i < t; i ++){
        int D, I, B;
        scanf("%d %d %d", &D, &I, &B);
        long long int ingredients[I];
        for(int j = 0; j < I; j++){
            long long int num;
            scanf("%lld", &num);
            ingredients[j] = num;
        }

        long long int min_price = 99999999;
        long long int cakes[B];
        for(int j = 0; j < B; j++){
            cakes[j] = 0;
            int Qi;
            scanf("%d", &Qi);
            for(int k = 0; k < Qi; k++){
                int index, qnt;
                scanf("%d %d", &index, &qnt);
                cakes[j] += (ingredients[index]*qnt);
            }

            if(cakes[j] < min_price){
                min_price = cakes[j];
            }
        }

        printf("%lld\n", D/min_price);
    }

    return 0;
}