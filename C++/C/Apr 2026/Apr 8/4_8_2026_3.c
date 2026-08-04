#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 5;
    
    int *arr = (int *)malloc(sizeof(int)*n);
    if(p==NULL){
        fprintf(stderr,"memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n;i++){
        arr[i] = (i +1)*10;
    }
}