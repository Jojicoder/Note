#include <stdio.h>

void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[],int size){
    for(int i =0; i< size;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[],int low,int high){
    int pivot = arr[high];

    int i = (low-1);

    printf(" [Partition] Pivot is %d. Range: %d-%d\n",pivot, low ,high);

    for(int j = low; j< high; j++){
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);

    return(i+1);
}

void quick_sort(int arr[],int low,int high){
    if(low < high){
        int pi = partition(arr, low,high);

        quick_sort(arr, low,pi-1);
        quick_sort(arr, pi+1,high);
    }
}

int main(){
    int data[] ={10,80,30,90,40,50,70};
    int n = sizeof(data)/ sizeof(data[0]);

    printf("=== Quick Sort Demo ===\n");
    printf("Original: ");
    print_array(data,n);
    printf("\n");

    quick_sort(data, 0,n-1);
    printf("\nSorted: ");
    print_array(data, n);
    return 0;
}