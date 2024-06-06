#include <stdio.h>
#include "stack.h"
#include <stdlib.h>
int IsEmpty(Stack S) {
    return S->Next == NULL;
}

Stack CreateStack(void) {
    Stack S;
    S = (PtrToNode)malloc(sizeof(struct Node));
    if (S == NULL) {
        fprintf(stderr, "out of space\n");
    }
    S->Next = NULL;
    //why use MakeEmpty in there?
    MakeEmpty(S);
    return S;
}

void MakeEmpty(Stack S) {
    if (S == NULL) {
        fprintf(stderr, "Must create a stack at first\n");
    }
    //when the stack is not empty
    //Pop all the element in the stack
    while (!IsEmpty(S))
    {
        Pop(S);
    }
}

void Pop(Stack S) {
    PtrToNode ptr;
    if (IsEmpty(S)) {
        printf("the stack must hold a value\n");
    }
    else {
        //header 作为头节点，不认为是栈内数据
        ptr = S->Next;
        S->Next = ptr->Next;
        ptr->Next = NULL;
        free(ptr);
    }
}
//写的有问题，如果根据栈来的话，那么应该是常数时间
//应该只入顶或者只出顶
//把栈的顶，当成链表的底，那就可以了
void Push(int x, Stack S) {
    PtrToNode newCell = (PtrToNode)malloc(sizeof(struct Node));
    if (newCell == NULL) {
        fprintf(stderr, "out of space\n");
    }
    //这里如果S->Next指向NULL，那么new一样指向NULL就可以，不用特别说明
    newCell->element = x;
    newCell->Next = S->Next;
    S->Next = newCell;
}

int Top(Stack S){
    return S->Next->element;
    fprintf(stderr,"Empty Stack!\n");
    return 0;
}

void DisplayStack(Stack S){
    PtrToNode cur = S->Next;

    while(cur !=NULL){
        printf("%d ",cur->element);
        cur = cur->Next;
    }
 
 
    printf("\n");
}

