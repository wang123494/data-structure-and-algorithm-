#include "queue.h"
#include <stdio.h>

int main(void) {
    Queue* queue = createQueue();
    enQueue(queue, 10);
    enQueue(queue, 20);
    enQueue(queue, 30);
    enQueue(queue, 40);

    Node* current = queue->front;
    while (current != NULL) {
        printf("%d\n", current->element);
        current = current->next;
    }

    return 0;
}
