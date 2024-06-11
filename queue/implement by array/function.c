#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
int isEmpty(Queue queue){
    return queue->size == 0;
}

void makeEmpty(Queue queue){
    queue->size = 0;
    queue->front = 1;
    queue->rear = 0;
}

int isFull(Queue queue){
    return queue->size == queue->capacity;
}

Queue createQueue(int maxElement){
    Queue Q = (Queue)malloc(sizeof(struct QueueRecord));

    if(maxElement < minElementSize){
        fprintf(stderr,"queue size is too small\n");
    }
    if(Q == NULL){
        fprintf(stderr,"out of space\n");

    }
    Q->capacity = maxElement;
    Q->array = (int*)malloc(sizeof(int) * maxElement);
    if(Q->array == NULL){
        fprintf(stderr,"out of space\n");
    }
    makeEmpty(Q);
    return Q;

}

void disposeQueue(Queue Q){
    if(Q != NULL){
        free(Q->array);
        free(Q);
    }
    Q = NULL;
}
//入队列
void Enqueue(int x,Queue Q){
    if(isFull(Q)){
        fprintf(stderr,"this queue is full\n");
    }else{
    //这里要增加一个到max-1后的判断
        if(Q->rear == Q->capacity - 1){
            Q->array[Q->rear] = x;
            Q->rear = 0;
        }else{
            Q->array[Q->rear++] = x;
        }
        Q->size++;

    }
}

 void dequeue(Queue Q){
    if(isEmpty(Q)){
        fprintf(stderr,"this queue is empty\n");
    }else{
        if(Q->front == Q->capacity - 1){
        Q->front = 0;
        }else{
            Q->front++;
        }
            Q->size--;
    }
 }

 int front(Queue Q){
    return Q->array[Q->front];
 }

 int frontAndDequeue(Queue Q){
    if(isEmpty(Q)){
        fprintf(stderr,"this queue is empty\n");
    }else{
        if(Q->front == Q->capacity - 1){
        int value = Q->array[Q->front];
        Q->front = 0;
        Q->size--;
        return value;
        }else{
            int value = Q->array[Q->front];
            Q->front++;
            Q->size--;
            return value;
        }
           
    }
 }