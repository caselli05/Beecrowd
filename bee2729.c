#include <stdio.h>
#include <string.h>
#include <stdlib.h>


typedef struct ListNode
{
    char name[21];
    struct ListNode* next;
}ListNode;


int nextWord(char* text, char* word, int n);

 
int main() {
    int n;
    scanf("%d", &n);
    getchar();

    for(int i = 0; i < n; i++){
        int j = 0;
        char text[20001];
        gets(text);

        char word[21];
        int k = nextWord(text, word, 0);
        if(k == 0){
            printf("%s\n", word);
        }

        ListNode* node = malloc(sizeof(ListNode));
        strcpy(node->name, word);
        node->next = NULL;
        j++;

        while(1){
            k = nextWord(text, word, k+1);

            ListNode* ptr = node;
            int flag = 1;
            while(ptr != NULL){
                if(strcmp(ptr->name, word) == 0){
                    flag = 0;
                }
                if(ptr->next == NULL){
                    break;
                }
                ptr = ptr->next;
            }

            if(flag == 1){
                ListNode* nextNode = malloc(sizeof(ListNode));
                strcpy(nextNode->name, word);
                nextNode->next = NULL;
                ptr->next = nextNode;
                j++;
            }
            
            if(k == 0){
                break;
            }
        }

        ListNode* ptrI = node;
        for(int i = 0; i < j; i++){
            ListNode* ptrk = ptrI->next;
            for(int k = i+1; k < j; k++){
                if(strcmp(ptrI->name, ptrk->name) > 0){
                    char tmp[21];
                    strcpy(tmp, ptrI->name);
                    strcpy(ptrI->name, ptrk->name);
                    strcpy(ptrk->name, tmp);
                }
                ptrk = ptrk->next;
            }
            printf("%s", ptrI->name);
            ptrI = ptrI->next;
            if(i != j-1){
                printf(" ");
            }else{
                printf("\n");
            }
        }
    }
 
    return 0;
}


int nextWord(char* text, char* word, int n){
    int i = 0;
    while(text[n] != '\0'){
        if(text[n] == ' '){
            word[i] = '\0';
            return n;
        }
        word[i] = text[n];
        n++;
        i++;
    }

    word[i] = '\0';
    return 0;
}