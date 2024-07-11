#include <stdio.h>
 
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        char s[4];
        scanf("%s", s);
        if(s[0] == s[2]){
            int num = (int)(s[0]-'0');
            printf("%d\n", num*num);
        }else if('A' <= s[1] && s[1] <= 'Z'){
            int num1 = (int)(s[0]-'0');
            int num2 = (int)(s[2]-'0');
            printf("%d\n", num2-num1);
        }else{
            int num1 = (int)(s[0]-'0');
            int num2 = (int)(s[2]-'0');
            printf("%d\n", num1+num2);
        }
    }

    return 0;
}