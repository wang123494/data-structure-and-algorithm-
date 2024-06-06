#include "function.h"
#include <stdio.h>
#include <stdlib.h>
//在值为 head->Next的时候是 正常
//在值为 head的时候是invalid heap pointer
List makeEmpty(List L) {
    Position cur = L;
    Position next;
    while (cur!= NULL) {
        next = cur->Next;
        free(cur); 
        cur = next;
    }
   
    //这里c是copy by value 所以改变那个指针，如果不赋值的话
    //就是用void的话，不会将原来的指针改变。
    L = NULL;
    return L;
}

//right
int  isEmpty(List L) {
    return L->Next == NULL;
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
//insert the value 
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
//find the first node that the valid is x in the List L
Position Find(int x, List L) {
    Position P = L;
    while (P != NULL && P->element != x) {
        //这里不用if，直接while里判断
        //if (P->element != x)
            P = P->Next;
    }
 
    return P;
}

Position FindPrevious(int x, List L) {
    Position p = L;
    while (p != NULL && p->Next->element != x) {
        p = p->Next;
    }
    return p;
}

void Delete(int x, List L) {
    Position p = FindPrevious(x,L);
    //这里直接可以用findPre的内容，就不用多次调用了
   /* while (p->element != x && p != NULL)
    {
        p = p->Next;
    }
    Position New   =  FindPrevious(x, L);
    New->Next = p -> Next;
    free(p);*/
    Position tmpCell = p->Next;
    if (!isLast(p, L)) {
        p->Next = tmpCell->Next;
        //直接将指向的这块内容释放掉就可以了
        free(tmpCell);
    }

}


void DeleteList(List L) {
    Position P, Tmp;
    P = L;
    L = NULL;
    while(P != NULL) {
        Tmp = P->Next;
        free(P);
        P = Tmp;
    }
}

Position Advance(Position P) {
    if(P != NULL)
        return P->Next;
    return NULL;
}

int Retrieve(Position P) {
    return P->element;
}

PtrToNode
create_node(int x)
{
    PtrToNode tmp_node;

    tmp_node = malloc(sizeof(struct Node));
    if (tmp_node == NULL) {
        fprintf(stderr,"out of the space!\n");
        return NULL;
    }
    tmp_node->element = x;
    tmp_node->Next = NULL;
    return tmp_node;
}