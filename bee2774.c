#include <stdio.h>
#include <math.h>


int main(void){
    while(1){
        int h, m;
        scanf("%d %d", &h, &m);
        int total_tests = (h*60)/m;


        double sum = 0;
        double n[total_tests];

        for(int i = 0; i < total_tests; i++){
            scanf("%lf", &n[i]);
            sum += n[i];
        }

        double avg = sum/total_tests;
        sum = 0;
        for(int i = 0; i < total_tests; i++){
            sum += ((n[i]-avg)*(n[i]-avg));
        }

        double precision = sum/(total_tests-1);
        precision = sqrt(precision);
        
        if(-10000000 <= precision){
            printf("%.5lf\n", precision);
        }
        else{
            return 0;
            
        }

    }

    
    

    return 0;


}