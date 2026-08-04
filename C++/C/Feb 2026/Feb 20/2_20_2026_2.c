#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
struct Node* next;
} Node;

Node* reverse_list(Node* head){
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;

    while( current != NULL){
        next = current -> next;
        current-> next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

Node* push(Node* head, int new_data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = new_data;
    new_node->next = head;
    return new_node;
}

void print_list(Node* node){
    while(node != NULL){
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main(){
    printf("=== Linked List Reversal ===\n");

    Node* head = NULL;

    head = push(head,5);
    head = push(head,4);
    head = push(head,3);
    head = push(head,2);
    head = push(head,1);

    printf("Original List:\n");
    print_list(head);

    head = reverse_list(head);

    printf("\nReversed List:\n");
    print_list(head);

    return 0;
}