#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[32];
    int age;
}Person;

Person *create_person(const char *name, int age){

    Person *p = (Person *)malloc(sizeof(Person));
    if(p == NULL){
        fprintf(stderr,"memory allocation failed\n");
        return NULL;
    }
    strncpy(p->name, name, sizeof(p->name)-1);
    p->age = age;
    return p;
}

void printf_person(Person *p){
    printf("name: %s, age: %d\n",p->name,p->age);
}

int main(void){
    Person *alice = create_person("Alice", 30);
    Person *bob =   create_person("Bob", 25);

    printf_person(alice);
    printf_person(bob);

    free(alice);
    free(bob);

    return 0;
}
