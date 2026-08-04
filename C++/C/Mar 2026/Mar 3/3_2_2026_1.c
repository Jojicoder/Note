#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n;

    printf("Enter count: ");
    scanf("%d",&n);

    int *arr = (int *)malloc(sizeof(int)*n);
    if(arr == NULL){
        fprintf(stderr,"memory allocation failed\n");
        return 1;
    }

    for(int i = 0; i < n;i++){
        printf("enter value[%d]: ",i);
        scanf("%d",&arr[i]);
    }

    int sum = 0;
    for(int i = 0;i<n;i++){
        sum += arr[i];
    }

    int max =arr[0],min =arr[0];
    for(int i = 0;i<n;i++){
       if(max < arr[i])
        max = arr[i];
    
        if(min>arr[i])
        min = arr[i];
    }

    printf("sum     : %d\n", sum);
    printf("Max     : %d\n", max);
    printf("Min     : %d\n", min);
    printf("average : %.2f\n", (double)sum/n);

    free(arr);
    arr = NULL;

    return 0;
}