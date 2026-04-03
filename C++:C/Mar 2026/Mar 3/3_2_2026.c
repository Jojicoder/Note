#include <stdio.h>

void rotate(int *a,int *b,int *c){
   /*int tmp = *a;
    *a = *c;
    *c = *b;
    *b =tmp;*/
   *a=*a+*b+*c; 
   *b=*a-*b-*c; 
   *c=*a-*b-*c; 
   *a=*a-*b-*c;

}

int main(void){
    int x = 10, y = 20, z=30;

    printf("before: x = %d, y = %d, z = %d\n",x,y,z);
    rotate(&x,&y,&z);
    printf("after : x = %d,y = %d,z = %d\n",x,y,z);

    return 0;
}