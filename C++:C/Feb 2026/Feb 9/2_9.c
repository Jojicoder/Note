#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct{
    Node* head;
} LinkedList;

Node* create_node(int value){
    Node* new_node = (Node*)malloc(sizeof(Node));

    if (new_node == NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }

    new_node-> data = value;
    new_node-> next = NULL;

    return new_node;
}

void append(LinkedList* list, int value){
    Node* new_node = create_node(value);

    if(list->head == NULL){
        list->head = new_node;
        printf(">> Appended (Head): %d\n", value);
        return;
    }

    Node* current = list->head;

    while(current-> next != NULL){
        current = current-> next;
    }

    current -> next = new_node;
    printf(">> Appended: %d\n", value);
}

void print_list(LinkedList* list){
    printf("List: [ ");

    Node* current = list->head;

    while(current != NULL){
        printf("%d -> ",current-> data);
        current = current ->next;
    }

    printf("NULL ]\n");
}

void free_list(LinkedList* list){
    Node* current = list -> head;
    Node* temp;

    while(current != NULL){
        temp = current;
        current = current ->next;

        printf("[Free] Node with data %d deleted.\n", temp->data);
        free(temp);
    }

    list ->head=NULL;
}

int main(){
    printf("==== Linked List Demo ===\n\n");

    LinkedList my_list;
    my_list.head =NULL;

    append(&my_list,10);
    append(&my_list,20);
    append(&my_list,30);

    print_list(&my_list);

    free_list(&my_list);

    return 0;
}