#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack 
CreateStack(int MaxElements){
    Stack S;
    if(MaxElements < MinStackSize){
        fprintf(stderr,"Stack size is too small\n");
    }
    S = malloc(sizeof(struct StackRecord));
    if(S == NULL) {
        fprintf(stderr,"out of space\n");
    }
    S->Array = malloc(sizeof(int) * MaxElements);
    if(S->Array == NULL){
        fprintf(stderr,"out of space\n");
    }
    S->Capacity = MaxElements;
    MakeEmpty(S);
    return S;
}
//消除指向的链表
void DisposeStack(Stack S){
    if(S != NULL){
        free(S->Array);
        free(S);
    }
}

int IsEmpty(Stack S){
    return S->TopOfStack == EmptyTOS;
}

void MakeEmpty(Stack S){
 S->TopOfStack = EmptyTOS;
}

int IsFull(Stack S){
    return S->TopOfStack == (S->Capacity) - 1; 
}
//我们将-1定为第一个，所以我们的push应该先加再push
void Push(int x ,Stack S){
    if(IsFull(S)){
        
        fprintf(stderr,"this stack is full\n");
    }
    else{
        S->Array[++(S->TopOfStack)] = x;
    }
}

void Pop(Stack S){
    if(IsEmpty(S)){
        fprintf(stderr,"empty satck!");
    }else
        S->TopOfStack--;
}

int Top(Stack S){
    if(!IsEmpty(S))
    return S->Array[S->TopOfStack];
    fprintf(stderr,"empty stack");
    return 0;
}
//取值后再 自减 很妙

int TopAndPop(Stack S){
    if(!IsEmpty(S)){
        return S->Array[S->TopOfStack --];
    }
     fprintf(stderr,"empty stack");
    return 0;
}