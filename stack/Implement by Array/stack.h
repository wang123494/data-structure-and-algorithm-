#ifndef _STACK_H
struct StackRecord;
typedef struct StackRecord* Stack;
struct StackRecord {
    //容量
    int Capacity;
    //stack的顶端
    int TopOfStack;
    //stack的身体
    int* Array;
};

#define MinStackSize 5
#define EmptyTOS -1

int IsEmpty(Stack S);
int IsFull(Stack S);
void DisposeStack(Stack S);
Stack CreateStack(int MaxElements);
void MakeEmpty(Stack S);
void Push(int x, Stack S);
int Top(Stack S);
void Pop(Stack S);
int TopAndPop(Stack S);

#endif /*_Stack_H*/
