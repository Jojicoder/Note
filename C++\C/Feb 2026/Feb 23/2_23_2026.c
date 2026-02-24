#include <stdio.h>

int my_atoi(char* str){
    int result = 0;

    for(int i=0;str[i]!='\0';i++){
        if(str[i] >='\0'&& str[i]<='9'){
            int current_digit = str[i]- '0';

            result = result * 10 + current_digit;
        }else{
            break;
        }
    }

    return result;
}

int main(){
    printf("=== Custom atoi Implementation ==\n\n");

    char weight_str1[]="315";
    char weight_str2[]="175";

    int actual_num1 =my_atoi(weight_str1);
    int actual_num2 =my_atoi(weight_str2);

    printf("[String 1] \"%s\" -> [Interger] %d\n",weight_str1,actual_num1);
    printf("[String 2] \"%s\" -> [Interger] %d\n",weight_str2,actual_num2);

    printf("\n[Math Test] %d + %d = %d\n", actual_num1,actual_num2,actual_num1+actual_num2);
}