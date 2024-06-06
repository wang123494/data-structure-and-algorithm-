//this is the statement of the Linkedlist
#ifndef _FUNCTION_H
#define _FUNCTION_H
struct Node;

//pointer to the strcut Node
typedef struct Node* PtrToNode;
typedef PtrToNode List;
typedef PtrToNode Position;

struct Node
{
    //a struct pointer that point to next struct
    int element;
    //body
    Position Next;
    /* data */
};


//清空整张链表
void makeEmpty(List L);
//判断链表是否为空
int isEmpty(List L);
int IsLast(Position p, List L);
Position Find(void* x, List L);
void insert(int x, List L, Position P);

#endif /*_function_h*/


