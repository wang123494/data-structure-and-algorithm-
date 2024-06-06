#ifndef _STACK_H
struct Node;
typedef struct Node* PtrToNode;
typedef PtrToNode Stack;
struct Node {
    int element;
    PtrToNode Next;
};

int IsEmpty(Stack S);
Stack CreateStack(void);
void DisplayStack(Stack S);
void MakeEmpty(Stack S);
void Push(int x, Stack S);
int Top(Stack S);
void Pop(Stack S);


#endif /*_Stack_H*/
