#include <stdio.h>
#include <stdlib.h>

 
int main() {
    int cv, ce, cs, fv, fe, fs;
    scanf("%d %d %d %d %d %d", &cv, &ce, &cs, &fv, &fe, &fs);
    
    if((cv*3+ce) == (fv*3+fe)){
        if(cs == fs){
            printf("=\n");
        }
        else if(cs > fs){
            printf("C\n");
        }
        else{
            printf("F\n");
        }
    }
    else if((cv*3+ce) > (fv*3+fe)){
        printf("C\n");
    }
    else{
        printf("F\n");
    }

    return 0;
}