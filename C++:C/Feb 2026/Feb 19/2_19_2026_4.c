#include <stdio.h>

int max(int a, int b){
    return (a>b)? a:b;
}

int main(){
    printf("=== The Knapsack Proble (DP) ===\n\n");

    int capacity = 20;
    int num_items = 7;

    int weights[] ={1,2,3,4,5,6,7};
    int values[] = {15,20,30,40,50,5,10};

    int dp[num_items +1][capacity +1];

    for(int i = 0; i <= num_items;i++){
        for(int w = 0; w<= capacity;w++){
            if(i==0||w==0){
                dp[i][w]=0;
            }
            else if(weights[i-1]<= w){
                int include_item = values[i-1]+dp[i-1][w-weights[i-1]];
                int exclude_item = dp[i-1][w];
                dp[i][w]= max(include_item,exclude_item);
            }else{
                dp[i][w] =dp[i-1][w];
            }
        }
    }

    printf("リュックの容量: %d kg\n", capacity);
    printf("アイテムの数: %d 個\n\n", num_items);

    printf(">>> 最大の満足度: %d", dp[num_items][capacity]);
    return 0;
}