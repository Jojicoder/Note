#include <stdio.h>
#include <time.h>

long long fib_naive(int n){
    if(n <=1)return n;
    return fib_naive(n-1) + fib_naive(n-2); 
}

long long fib_dp(int n){
    if(n<=1) return n;

    long long dp[n+1];

    dp[0] = 0;
    dp[1] = 1;

    for(int i =2;i<=n; i++){
        dp[i] = dp[i-1]+dp[i-2];
    }

    return dp[n];
}

int main(){
    int n = 50;

    clock_t start, end;
    double time_taken;

    printf("=== Fibonacci: DP vs Naive ===\n\n");
    printf("Calulationg Gibonacci number for N = %d...\n\n",n);


    start = clock();
    long long result_dp = fib_dp(n);
    end = clock();

    time_taken = ((double)(end - start))/CLOCKS_PER_SEC;
    printf("[DO Mode] Result: %lld \n", result_dp);
    printf("  -> Time taken: %f seconds (Instant!)\n\n", time_taken);

    printf("[Naive Mode] Calculating... (This will freeze for a few seconds)\n");

    start = clock();
    long long result_naive = fib_naive(n);
    end = clock();

    time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("[Naive Mode] Result: %lld \n", result_naive);
    printf(" -> Time taken: %f seconds (Slow!)\n", time_taken);
    return 0;



}