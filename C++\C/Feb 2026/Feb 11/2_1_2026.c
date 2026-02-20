#include <stdio.h>

int main(){
    int data[] ={5,1,4,2,8};

    int n = sizeof(data) / sizeof(data[0]);

    printf("Before Sort: ");
    for(int i = 0; i< n;i++){
        printf("%d " , data[i]);
    }
    printf("\n");

    for(int i = 0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(data[j]<data[min_index]){
                min_index = j ;
            }
        }
        if(min_index !=i){
            int temp =data[i];
            data[i] = data[min_index];
            data[min_index] = temp;
        }
    }

    printf("After sort: ");
    for(int i = 0;i<n;i++){
        printf("%d ", data[i]);
    }
    printf("\n");
    return 0;

}