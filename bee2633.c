#include <stdio.h>
#include <string.h>


typedef struct Meats{
    int valid;
    char name[21];
}Meats;


void sort(Meats* meat, int n);

 
int main() {
    int n;
    while(scanf("%d", &n) != EOF){
        Meats meat[n];
        for(int i = 0; i < n; i++){
            int val;
            char s[21];
            scanf("%s %d", s, &val);
            strcpy(meat[i].name, s);
            meat[i].valid = val;
        }

        sort(meat, n);

        for(int i = 0; i < n; i++){
            printf("%s",meat[i].name);
            if(i != n-1){
                printf(" ");
            }
        }
        printf("\n");
    }
 
    return 0;
}


void sort(Meats* meat, int n){
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(meat[i].valid > meat[j].valid){
                Meats tmp = meat[i];
                meat[i] = meat[j];
                meat[j] = tmp;
            }
        }
    }
    return;
}