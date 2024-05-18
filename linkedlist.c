#include <stdio.h>
typedef struct linkedlist
{
    //a struct pointer that point to next struct
    struct linkedlist * node;
    //body
    int number;
    
    /* data */
}linkedlist;

int main(void){
    //initialize
    linkedlist list0;
    linkedlist list1;
    linkedlist list2;
    linkedlist * Head = &list0;
    list0.node = &list1;
    list1.node = &list2;
    list2.node = NULL;
    list0.number = 0;
    list1.number = 1;
    list2.number = 2;
    linkedlist* cur = Head;
    while(cur != NULL){
        //cur 就是head 指向下一个node 的number
        printf("%d ",cur->number);
        cur = cur->node;
    }
    printf("\n");
    //反转链表
    linkedlist *current = Head;
    linkedlist *pre = NULL;
    while(current != NULL){
        linkedlist * temp = current->node;
        current->node = pre;
        pre = current;
        current = temp;
    }
    linkedlist* next = pre;
    while(next != NULL){
        printf("%d ",next->number);
        next = next->node;
    }
}