#include <stdio.h>

long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int M, N;
    while(scanf("%d %d", &M, &N) != EOF) {
        printf("%lld\n", factorial(M) + factorial(N));
    }
    return 0;
}

