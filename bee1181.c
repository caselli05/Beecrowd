    #include <stdio.h>
    
    int main() {
        double M[12][12];
        int L;
        char T;
        scanf("%d %c", &L, &T);
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                double num;
                scanf("%lf", &num);
                M[i][j] = num;
            }
        }
        double soma = 0.0;
        for(int i = 0; i < 12; i++){
            soma += M[L][i];
        }
        if(T == 'M'){
            soma = soma/12.0;
        }
        printf("%.1lf\n", soma);
    
        return 0;
    }