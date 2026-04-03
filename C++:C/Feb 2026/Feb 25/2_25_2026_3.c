#include <stdio.h>
#include <stdlib.h>

int main(){
    int number = 42;
    int* ptrToNumber = &number;

    printf("\n---1. Basic Pointers ---\n");
    printf("Value of number: %d\n", number);

    printf("Affress of number: %p\n",(void*)&number);
    printf("Address stored in ptrToNUmber: %p\n", (void*)ptrToNumber);

    *ptrToNumber = 99;
    printf("Modified value of number: %d\n", number);

    int numbersArray[3] ={10,20,30};
    int* ptrToArray = numbersArray;

    printf("\n--- 2. Pointers and Arrays --\n");
    printf("Arrays address: %p\n",(void*) &ptrToArray);
    printf("First element (Index 0) : %d\n", *ptrToArray);

    printf("Second element (Index 1): %d\n", *(ptrToArray+1));
    printf("Third element (Index 2): %d\n", *(ptrToArray +2));

    printf("\n--- 3. Dynamic Memory Allocation ---\n");
    int * dynamicNumber = (int*)malloc(sizeof(int));

    if(dynamicNumber == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    *dynamicNumber = 777;

    printf("Value in Heap memory: %d\n", *dynamicNumber);
    printf("Address of Heap memory: %p\n", (void*)dynamicNumber);

    free(dynamicNumber);

    dynamicNumber = NULL;

    printf("Memory has been successfully freed and pointer is NULL.\n");

    return 0;
}