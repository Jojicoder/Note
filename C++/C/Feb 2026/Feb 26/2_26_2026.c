#include <stdio.h>

double targetFunction(double x){
    return (3.0*x*x)+(5.0*x);
}

double numericalDerivative(double x){
    double h = 0.00001;

    double slope = (targetFunction(x+h)- targetFunction(x)) /h;

    return slope;
}
int main() {
    // 傾きを調べたい地点 x を指定
    double checkPoint = 2.0;

    printf("\n--- Derivative Calculation at x = %f ---\n", checkPoint);

    // 手作業で導き出した公式 f'(x) = 6x + 5 による「完璧な正解」
    double exactAnswer = (6.0 * checkPoint) + 5.0;
    printf("1. Exact (Math Formula) : %f\n", exactAnswer);

    // C言語が極小の h を使って導き出した「近似値」
    double computerAnswer = numericalDerivative(checkPoint);
    printf("2. Numerical (C Code)   : %f\n", computerAnswer);

    // コンピュータの計算誤差を可視化
    double error = computerAnswer - exactAnswer;
    printf("3. Calculation Error    : %f\n\n", error);

    return 0;
}