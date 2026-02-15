#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *left;
    struct Node *right;
} Node;

Node* create_node(int value) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(new_node == NULL){
        printf("Memory allocation failed. \n");
        exit(1);
    }

    new_node->data = value;
    new_node->left = NULL;
    new_node->right = NULL;

    return new_node;
}

Node* insert(Node* root, int value){
    if(root == NULL){
        return create_node(value);
    }

    if(value < root -> data){
        printf(" [L] %d < %d, going left.\n", value, root->data);
        root->left =insert(root->left, value);
    }
    else if(value > root->data){
        printf(" [R] %d > %d, going right.\n",value, root->data);
        root->right = insert(root->right, value);
    }

    return root;
}

void search(Node* root, int target){
    if(root ==NULL){
        printf(">> %d is NOT in the tree.\n", target);
        return;
    }

    if(root -> data == target){
        printf(">> Found %d! (Target acquired)\n", target);
        return;
    }

    if(target <  root -> data){
        search(root->left, target);
    }else{
        search(root->right, target);
    }
}

void print_tree(Node* root){
    if(root ==NULL)return;

    print_tree(root->left);
    printf("%d ", root->data);
    print_tree(root->right);
}

void free_tree(Node* root){
    if(root == NULL)return;

    free_tree(root->left);
    free_tree(root->right);

    free(root);
}

int main(){
    Node* root = NULL;

    printf("=== Binary Search Tree Demo ===\n\n");
    printf("--- Inserting Data ---\n");
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("\n--- Sorted Output (In-order) ---\n");
    print_tree(root);
    printf("\n");

    printf("\n--- Search Test ---\n");
    search(root, 40);
    search(root, 99);

    free_tree(root);
    printf("\n[Free] Tree memory released.\n");

    return 0;
}