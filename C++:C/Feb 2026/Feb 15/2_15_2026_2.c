#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TABLE_SIZE 10

typedef struct Node {
    char key[50];
    int value;
    struct Node *next;
} Node;

typedef struct {
    Node *buckets[TABLE_SIZE];
} HashTable;

unsigned int hash_function(const char *key){
    unsigned int sum = 0;
    for(int i = 0; key[i] != '\0';i++){
        sum += key[i];
    }

    return sum % TABLE_SIZE;
}

HashTable* create_table(){
    HashTable *t = (HashTable*)malloc(sizeof(HashTable));
    for(int i= 0; i<TABLE_SIZE;i++){
        t->buckets[i]=NULL;
    }
    return t;
}

void insert(HashTable *t, const char *key, int value){
    unsigned int index = hash_function(key);

    Node *new_node = (Node*)malloc(sizeof(Node));
    strcpy(new_node->key, key);
    new_node->value = value;

    new_node-> next = t->buckets[index];
    t->buckets[index] =new_node;

    printf(">> Inserted: '%s' ($%d) at Index [%d]\n", key, value, index);
}

int search(HashTable *t, const char *key){
    unsigned int index = hash_function(key);
    Node *current = t->buckets[index];

    while(current != NULL){
        if(strcmp(current->key, key)==0){
            printf("[Found] %s costs $%d (Index %d)\n", key,current-> value, index);
            return current-> value;
        }
        current = current ->next;
    }

    printf("[Not Found] Key '%s' does not exist.\n",key);
    return -1;
}

void free_table(HashTable *t){
    for(int i = 0; i < TABLE_SIZE;i++){
        Node *current = t->buckets[i];
        while(current != NULL){
            Node *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(t);
    printf("[Free] Hash Table memory released. \n");
}

int main(){
    printf("=== Hash Table Demo ===\n");
    HashTable *myDict = create_table();
    insert(myDict,"Tea", 500);
    insert(myDict,"Banana",200);
    insert(myDict,"Orange",300);

    printf("\n--- Collision Test ---\n");
    insert(myDict,"Tea",500);
    insert(myDict,"Eat",999);

    printf("\n--- Search Test ---\n");
    search(myDict,"Banana");
    search(myDict,"Eat");
    search(myDict,"Grape");

    free_table(myDict);

    return 0;
}
