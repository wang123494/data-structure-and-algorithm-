#ifndef _Queue_h
struct QueueRecord;
typedef struct QueueRecord* Queue;
int isEmpty(Queue queue);
int isFull(Queue queue);
Queue createQueue(int maxElemnts);
void disposeQueue(Queue queue);
void makeEmpty(Queue queue);
void Enqueue(int x ,Queue queue);
int front(Queue queue);
void dequeue(Queue queue);
int frontAndDequeue(Queue queue);

#define minElementSize 5
struct QueueRecord{
    //容量
    int capacity;
    //头
    int front;
    //尾
    int rear;
    //大小
    int size;
    //real queue
    int * array;
};


#endif