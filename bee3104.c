#include <stdio.h>
#include <stdlib.h>

typedef struct ListNode{
    int alg;
    struct ListNode* next;
}ListNode;

void freeNodes(ListNode* initialNode){
    ListNode* ptr = initialNode;
    ListNode* nextNode = initialNode->next;
    while (nextNode != NULL){
        free(ptr);
        ptr = nextNode;
        nextNode = nextNode->next;
    }free(ptr);

    return;
}

int main(void){
    ListNode* creationNode = malloc(sizeof(ListNode));
    if(creationNode == NULL){
        printf("Err0r all0cating mem0ry!");
        return 1;
    }

    ListNode* initalAlg = creationNode;

    char thisAlg;
    scanf("%c", &thisAlg);
    while('0' <= thisAlg && thisAlg <= '9'){
        creationNode->alg = thisAlg-'0';
        creationNode->next = NULL;

        ListNode* nextNode = malloc(sizeof(ListNode));
        if(nextNode == NULL){
            printf("Err0r all0cating mem0ry!");
            freeNodes(initalAlg);
            return 1;
        }
        creationNode->next = nextNode; 
        creationNode = nextNode;  
        scanf("%c", &thisAlg);
    }creationNode->next = NULL;

    long long int div;
    scanf("%lld", &div);
    


    ListNode* ptr = initalAlg;
    long long int num = 0;
    while(num < div){
        num *= 10;
        num += ptr->alg;
        ptr = ptr->next;
    }
    if(ptr == NULL || ptr->next == NULL){
        printf("%lld\n", num%div);
        return 0;
    }

    while(ptr->next != NULL){
        num *= 10;
        num += ptr->alg;
        ptr = ptr->next;
        num %= div;
    }
    printf("%lli\n", num);
    freeNodes(initalAlg);

    scanf("%c", thisAlg);

    return 0;
}