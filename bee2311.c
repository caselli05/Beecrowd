#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        getchar();
        char name[101];
        gets(name);
        double min = 11, max = -1;
        double dif;
        double sum = 0;
        scanf("%lf", &dif);
        for(int j = 0; j < 7; j++){
            double num;
            scanf("%lf", &num);
            if(num > max){
                max = num;
            }
            if(num < min){
                min = num;
            }
            sum += num;
        }
        sum -= min;
        sum -= max;
        sum *= dif;
        printf("%s %.2lf\n", name, sum);   
    }
 
    return 0;
}