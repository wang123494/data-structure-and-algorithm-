#ifndef QUEUE_H
#define QUEUE_H

typedef struct Node {
    int element;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue();
void enQueue(Queue* q, int element);
int deQueue(Queue* q);
int isEmpty(Queue* q);

#endif // QUEUE_H
