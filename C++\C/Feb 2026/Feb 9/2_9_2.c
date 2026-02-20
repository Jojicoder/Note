#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    int top;
    int capacity;
}Stack;

Stack* create_stack(int initial_capacity){
    Stack *s = (Stack*)malloc(sizeof(Stack));
    if(s==NULL){
        printf("Failed to allocate memory for Stack. \n");
        exit(1);
    }

    s -> data = (int*)malloc(initial_capacity * sizeof(int));
    s -> top =0;
    s -> capacity = initial_capacity;

    printf("[Init] Stack created with capacity: %d\n", initial_capacity);
    return s;
}

void destroy_stack(Stack *s){
    if(s->data != NULL){
        free(s->data);
    }

    free(s);
    printf("[Free] Stack memory released. \n");
}

void push(Stack *s, int value){
    if(s->top == s->capacity){
        int new_capacity = s->capacity *2;
        int *new_data = (int*)realloc(s->data, new_capacity * sizeof(int));

        if(new_data == NULL){
            printf("Failed to reallocate memory. \n");
            return ;
        }

        s->data = new_data;
        s->capacity = new_capacity;
        printf("[Resize] Capacity expanded tp %d\n", s->capacity);
    }

    s->data[s->top] = value;
    s->top++;
    printf("[>> Pushed: %d\n", value);
}

int pop(Stack *s){
    if(s-> top == 0){
        printf("Error: Stack is empty!\n");
        return -1;
    }

    s->top--;
    int value = s->data[s->top];
    printf("<< Popped: %d\n", value);

    return value;
}

int main(){
    printf("=== Dynamic Stack Demo ===\n\n");

    Stack *myStack = create_stack(2);

    push(myStack, 10);
    push(myStack, 20);
    push(myStack, 30);
    push(myStack, 40);
    push(myStack, 50);
    push(myStack, 60);
    push(myStack, 70);

    printf("\n--- Start Popping ---\n");

    destroy_stack(myStack);

    return 0;
}