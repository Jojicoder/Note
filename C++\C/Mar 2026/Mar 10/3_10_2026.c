#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
} Node;

Node *create_node(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    if(node == NULL){
        fprintf(stderr,"memory allocation failed\n");
        return NULL;
    }
    node->data = data;
    node->next = NULL;
    return node;
}

int main(void){
    Node *n1 = create_node(10);
    Node *n2 = create_node(20);
    Node *n3 = create_node(30);

    n1->next = n2;
    n2->next = n3;

    Node *cur = n1;
    while(cur != NULL){
        printf("%d -> ", cur->data);
        cur = cur->next;
    }

    printf("NULL\n");

    free(n1);
    free(n2);
    free(n3);
    return 0;
    
}