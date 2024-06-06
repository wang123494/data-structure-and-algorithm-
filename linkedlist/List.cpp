#include "function.h"
#include <stdio.h>
#include <stdlib.h>
void makeEmpty(List L) {
    List curr = L;
    List next = curr->Next;
    while (curr->Next != NULL) {
        next = curr->Next;
        free(curr);
        curr = next;
    }
    L = NULL;
}

int  isEmpty(List L) {
    if (L->Next == NULL) {
        return 1;
    }
    else {
        return 0;
    }
    return -1;
}

int isLast(Position P, List L) {

    //判断P在不在List里
    List cur = L;
    while (cur->Next != P) {
        cur = cur->Next;
    }
    if (cur == NULL) {
        fprintf(stderr, "there is no P in the  list L\n");
        return  -1;
    }

    if (P->Next == NULL) {
        return 1;
    }
    else {
        return 0;
    }
    return -1;
}

void insert(int x, List L, Position P) {
    Position tmpCell;
    tmpCell = (Position)malloc(sizeof(struct Node));
    if (tmpCell == NULL) {
        fprintf(stderr,"out of the space!\n");
    }
    tmpCell->element = x;
    tmpCell->Next = P->Next;
    P->Next = tmpCell;
}