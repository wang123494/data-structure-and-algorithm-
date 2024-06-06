#include <stdio.h>
#include "function.h"
int main(void) {
    //initialize
    struct Node myNode = { 10,NULL };
    List head = &myNode;
    insert(20, head, head);
    while (head != NULL) {
        printf("%d ",head->element);
        head = head->Next;
    }
    head = &myNode;
    insert(30, head, head->Next);
    while (head != NULL) {
        printf("%d ", head->element);
        head = head->Next;
    }

}