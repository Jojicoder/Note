#include <stdio.h>
#include <stdlib.h>

void merge(int arr[],int left, int mid,int right){
    int i,j,k;
    int n1 = mid -left+1;
    int n2 = right - mid;

    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    for(i=0;i<n1;i++)
        L[i]= arr[left+i]
}