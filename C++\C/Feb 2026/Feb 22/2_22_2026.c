#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUCKET_SIZE 5

typedef struct Node{
    char key[50];
    int value;
    struct Node* next;
} Node;

int get_hash(char* key){
    int hash = 0;
    for(int i =0; key[i]!='\0'; i++){
        hash = (hash * 31 + key[i]) % BUCKET_SIZE;
    }
    return hash;
}

void put(Node* buckets[], char* key, int value){
    int index = get_hash(key);
    Node* current = buckets[index];

    while(current != NULL){
        if(strcmp(current->key,key)==0){
            current->value = value;
            return;
        }
        current = current ->next;
    }

    Node* new_node =(Node*)malloc(sizeof(Node));
    strcpy(new_node->key,key);
    new_node->value = value;

    new_node->next =buckets[index];
    buckets[index]=new_node;
}

int get(Node* buckets[],char* key){
    int index = get_hash(key);
    Node* current = buckets[index];

    while(current != NULL){
        if(strcmp(current->key,key)==0){
            return current -> value;
        }
        current = current ->next;
    }
    return -1;
}

int main(){
    printf("=== C Hash Map Implementation ===\n\n");
    Node* hash_map[BUCKET_SIZE] ={NULL};

    printf("[Putting Data...]\n");
    put(hash_map,"Alice", 25);
    put(hash_map,"Bob",30);
    put(hash_map,"Charlie", 35);
    put(hash_map,"David",40);

    printf("\n[Getting Data...]\n");
    printf("Alice's age: %d\n",get(hash_map,"Alice"));
    printf("Bob's age: %d\n",get(hash_map,"Bob"));
    printf("Charlie's age: %d\n",get(hash_map,"Charlie"));

    printf("\n[Searching for unknown key...]\n");
    printf("Eve's age: %d\n",get(hash_map,"Eve"));
    put(hash_map,"Eve",31);
    printf("Add Eve\n");
    printf("Eve's age: %d\n",get(hash_map,"Eve"));

    printf("\n[Updating Alice's age to 99...]\n");
    put(hash_map,"Alice",99);
    printf("Alice's new age: %d\n", get(hash_map,"Alice"));



    return 0;
}