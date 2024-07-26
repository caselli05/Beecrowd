    #include <stdio.h>
    
    int main() {
        double M[12][12];
        char T;
        scanf("%c ", &T);
        for(int i = 0; i < 12; i++){
            for(int j = 0; j < 12; j++){
                double num;
                scanf("%lf", &num);
                M[i][j] = num;
            }
        }
        int nums = 0;
        double soma = 0.0;
        for(int i = 0; i < 5; i++){
            for(int j = i+1; j < (11-i); j++){
                soma += M[i][j];
                nums++;
            }
        }

        if(T == 'M'){
            soma = soma/nums;
        }
        printf("%.1lf\n", soma);
        
        return 0;
    }