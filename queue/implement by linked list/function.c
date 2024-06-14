#include "queue.h"
#include <stdlib.h>
#include <stdio.h>

Queue* createQueue() {
    Queue* q = (Queue*)malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

void enQueue(Queue* q, int element) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->element = element;
    newNode->next = NULL;
    if (q->rear == NULL) {
        q->front = q->rear = newNode;
        return;
    }
    q->rear->next = newNode;
    q->rear = newNode;
}

int deQueue(Queue* q) {
    if (q->front == NULL) {
        return -1; // or some other error value
    }
    Node* temp = q->front;
    q->front = q->front->next;
    if (q->front == NULL) {
        q->rear = NULL;
    }
    int element = temp->element;
    free(temp);
    return element;
}

int isEmpty(Queue* q) {
    return q->front == NULL;
}
