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

//功能实现不难，难的是怎么想参数，怎么想返回值，根据值查找，根据值删除，这有人点好写一点

//清空整张链表
List makeEmpty(List L);
//判断链表是否为空
int isEmpty(List L);
int isLast(Position p, List L);
Position Find(int x, List L);
void insert(int x, List L, Position P);
void Delete(int x, List L);
Position FindPrevious(int x, List L);
void DeleteList(List L);
Position Advance(Position P);
int Retrieve(Position P);
#endif /*_function_h*/


