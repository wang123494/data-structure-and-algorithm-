#include <stdio.h>
#include "queue.h"
int main(void){
    Queue Q;
    Q = createQueue(10);
    if(isEmpty(Q)){
        printf("is empty\n");
    }
    for(int i = 0 ;i < 10;i++){
        Enqueue(i,Q);
        printf("current  value is %d\n",Q->array[i]);
        printf("current size is %d\n",Q->size);
    }
    for(int i =0;i< 15;i++){
   int value = frontAndDequeue(Q);
    printf("%d",value);
    }   
    return 0;
}