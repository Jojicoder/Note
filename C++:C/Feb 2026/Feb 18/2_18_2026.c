#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct{
    int data[MAX_SIZE];
    int size;
}PriorityQueue;

PriorityQueue* create_queue(){
    PriorityQueue *pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->size =0;
    return pq;
}

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void enqueue(PriorityQueue * pq, int value){
    if(pq->size >= MAX_SIZE){
        printf("Queue is full\n");
        return;
    }

    int i  = pq->size;
    pq->data[i]=value;
    pq->size++;

    while(i>0){
        int parent = (i -1 )/2;

        if(pq->data[i]> pq->data[parent]){
            swap(&pq->data[i], &pq->data[parent]);
            i = parent;
        }else{
            break;
        }
    }
    printf(">> Enqueued: %d (Priority)\n", value);
}

int dequeue(PriorityQueue *pq){
    if(pq->size ==0){
        printf("Queue is empty!\n");
        return -1;
    }

    int max_val = pq->data[0];

    pq->size--;
    pq->data[0] = pq->data[pq->size];

    int i = 0;
    while(1){
        int left = 2 * i +1;
        int right = 2*i +2;
        int largest = i;

        if(left< pq->size && pq->data[left]> pq->data[largest]){
            largest = left;
        }
        if(right < pq->size && pq->data[right]> pq->data[largest]){
            largest = right;
        }

        if(largest !=i){
            swap(&pq->data[i], &pq->data[largest]);
            i = largest;
        }else{
            break;
        }
    }
    printf("<< Dequeued: %d (Process critical task)\n", max_val);
    return max_val;
}

void print_queue(PriorityQueue *pq){
    printf("Current Queue: [ ");
    for(int i = 0; i < pq->size;i++){
        printf("%d ", pq->data[i]);
    }
    printf("]\n");
}

int main(){
    printf("=== Emergency Room (Priority Queue) ===\n");
    PriorityQueue *er = create_queue();

    enqueue(er,10);
    enqueue(er,30);
    enqueue(er,20);

    print_queue(er);

    printf("\n--- Emergency! ---\n");
    enqueue(er, 99);
    print_queue(er);

    printf("\n--- Start Treatment ---\n");
    dequeue(er);
    dequeue(er);
    dequeue(er);

    free(er);
    return 0;
}