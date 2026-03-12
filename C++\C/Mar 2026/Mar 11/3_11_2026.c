
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

Node *create_node(int data){
    Node *node = (Node *)malloc(sizeof(Node));
    if(node == NULL){
        fprintf(stderr,"memory alloction failed\n");
        return NULL;
    }

    node->data = data;
    node->next = NULL;
    return node;
}

void print_list(Node *head){
    Node *cur = head;
    while(cur !=NULL){
        printf("%d -> ", cur->data);
        cur = cur->next;
    }

    printf("NULL\n");
}

Node *push_back(Node *head,int data){
    Node *node = create_node(data);

    if(head ==NULL){
        return node;
    }

    Node *cur = head;
    while(cur->next !=NULL){
        cur = cur->next;
    }

    cur->next = node;
    return head;
}

int main(void){
    Node *head = NULL;
    head = push_back(head,10);
    head = push_back(head, 20);
    head = push_back(head,30);

    print_list(head);

    Node *cur = head;
    while(cur != NULL){
        Node *tmp = cur ->next;
        free(cur);
        cur = tmp;
    }

    return 0;
}