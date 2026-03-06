#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[32];
    int age;
}Person;

void set_person(Person *p,const char *name, int age){
    strncpy(p->name, name, sizeof(p->name)-1);
    p->age = age;
}

void print_person(const Person *p){
    printf("name: %s, age: %d\n", p->name, p->age);
}

void print_max(Person *p,int n){
    int maxage=0;

    for(int i =0; i < n;i++){
        if(maxage < p[i].age){
            maxage = i;
        }
    }

    printf("name :%s is age :%d",p[maxage].name, p[maxage].age);
}

int main(void){
    int n = 3;
    Person *people = (Person *)malloc(sizeof(Person)*n);
    if(people == NULL){
        fprintf(stderr, "memory allocation faile\n");
        return 1;
    }

    set_person(&people[0],"Alice", 30);
    set_person(&people[1],"Bob",   25);
    set_person(&people[2],"Carol", 28);

    printf("--- all members ---\n");
    for(int i = 0; i< n; i++){
        print_person(&people[i]);
    }

    free(people);
    people = NULL;

    return 0;
}