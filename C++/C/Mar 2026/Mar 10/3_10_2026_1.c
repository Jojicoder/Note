#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *create_node(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    if(node == NULL){
        fprintf(stderr, "memory allocation failed\n");
        return NULL;
    }

    node->data = data;
    node->next = NULL;
    return node;
}

Node *push_front(Node *head, int data){
    Node *node = create_node(data);
    node->next = head;
    return node;
}

void print_list(Node *head){
    Node *cur = head;
    while(cur !=NULL){
        printf("%d -> ", cur ->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

int main(void){
    Node *head = NULL;

    head = push_front(head,30);
    head = push_front(head,20);
    head = push_front(head,10);

    print_list(head);

    Node *cur = head;
    while(cur !=NULL){
        Node *tmp = cur->next;
        free(cur);
        cur = tmp;
    }

    return 0;
}