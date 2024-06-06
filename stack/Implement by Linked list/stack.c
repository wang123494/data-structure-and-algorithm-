#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main(void) {
    Stack header = CreateStack();

    Push(20, header);
    Push(100,header);
    Push(30,header);
    Pop(header);
    // while(tmp!= NULL){
    //     printf("%d",tmp->element);
    //     tmp = tmp->Next;
    // }
    printf("%d\n", header->Next->element);
    int n = Top(header);
    printf("%d\n",n);
    DisplayStack(header);
    return 0;
}