#include <stdio.h>

void check_answer(int ans[5]);

int main(void){
    int n;
    scanf("%d", &n);
    while(n != 0){
        for(int i = 0; i < n; i++){
            int ans[5];
            for(int j = 0; j < 5; j++){
                scanf("%i", &ans[j]);
                if(ans[j] <= 127){
                    ans[j] = 1;
                }else{
                    ans[j] = 0;
                }
            }
            check_answer(ans);
        }

        scanf("%d", &n);
    }

    return 0;
}

void check_answer(int ans[5]){
    int is_valid = 0;
    char marked;
    for(int i = 0; i < 5; i++){
        if(ans[i] == 1){
            is_valid++;
            marked = i + 'A';
        }
    }
    if(is_valid != 1){
        printf("*\n");
    }else{
        printf("%c\n", marked);
    }

    return;
}