#include <stdio.h>

int main(void){
	double n[3];
	double s[3];
	scanf("%lf %lf %lf", &n[0], &n[1], &n[2]);
	s[0] = n[0];
	s[1] = n[1];
	s[2] = n[2];
	for(int i = 0; i < 2; i++){
		for(int j = i + 1; j < 3; j++){
			if(n[i] > n[j]){
				double tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
 			}
		}
	}

	if(n[2] < (n[1]+n[0])){
		printf("Perimetro = %.1lf\n", n[0]+n[1]+n[2]);
	}
	else{
		printf("Area = %.1lf\n", (s[0]+s[1])*s[2]/2);
	} 

	return 0;

}
