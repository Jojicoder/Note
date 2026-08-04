#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[32];
    int scores[3];
}Student;

double calc_average(int *scores, int n){
    double ave=0.0;
    for(int i = 0;i<n;i++){
        ave += *scores;
        scores++;
    }
    ave /=n;

    return ave;
};

void print_all(Student *s,int n)
{
    for(int i = 0; i<n;i++){
        printf("name: %s, average: %.2f\n",s[i].name,calc_average(s[i].scores,n));
    }
}

void print_best(Student *s, int n){
    double best =calc_average(s[0].scores, 3);
    int num = 0;
    for(int i = 1; i<n;i++){
        if(best<calc_average(s[i].scores,n)){
            best = calc_average(s[i].scores, n);
             num= i;
        }
    }
    printf("name: %s, average: %.2f\n",s[num].name,best);
}

int main(void){
    int n = 3;

    Student *students = (Student *)malloc(sizeof(Student)*n);
    if(students == NULL){
        fprintf(stderr,"memory allocation failed\n");
    }

    strncpy(students[0].name, "Alice", 31);
        students[0].scores[0]=80;
        students[0].scores[1]=70;
        students[0].scores[2]=90;
    strncpy(students[1].name,"Bob",31);
        students[1].scores[0]=60;
        students[1].scores[1]=75;
        students[1].scores[2]=85;
    strncpy(students[2].name,"Carol",31);
        students[2].scores[0]=95;
        students[2].scores[1]=88;
        students[2].scores[2]=92;

    print_all(students,n);
    printf("--- best students ---\n");
    print_best(students,n);

    free(students);
    students = NULL;

    return 0;
}