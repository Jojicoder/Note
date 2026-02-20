#include <stdio.h>

int add(int a, int b){return a+b;}
int sub(int a, int b){return a-b;}
int mul(int a, int b){return a*b;}

void calculate(int x, int y, int (*operation)(int, int)){
    int result = operation(x, y);
    printf("計算結果: %d\n", result);
}


int main(){
    printf("=== 関数ポインタのデモ ===\n\n");

    int a = 10;
    int b = 5;

    printf("[直接渡すパターン]");
    printf("Add: ");
    calculate(a, b, add);
    printf("Sub: ");
    calculate(a,b,sub);
    printf("Mul: ");
    calculate(a, b, mul);

    printf("\n[配列に入れるパターン]\n");

    int (*operations_array[3])(int, int) ={add, sub, mul};

    printf("配列の1番目 %d\n", operations_array[1](20,10));
    return 0;
}