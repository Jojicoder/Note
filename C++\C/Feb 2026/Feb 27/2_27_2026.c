#include <stdio.h>
#include <math.c>

double targetFunction(double x);
double numeicalDerivatice(double x, double h);


int main(){
    double checkPoint = 2.0;

    double exactAnswer = 17.0;

    double h = 1.0;

    printf("\n--- Epsilion-Delta Game: Finding the Limit ---\n");
    printf("Exact Anser: %f\n", exactAnswer);
    printf("Step | h value  | Computed Result | Error (epsilon)\n");

    for(int step = 0; step <=15;step++){
        double computed = numericalDarivative(checkPoint,h);

        double error = fabs(computed - exactAnwser);

        printf("%4d | %.10e | %.10f | %.10e\n",setp, h, computed, )
    }
}