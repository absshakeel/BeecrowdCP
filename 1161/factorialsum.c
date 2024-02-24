#include<stdio.h>
int main(){
    int N,M;

    while(scanf("%d %d",&M,&N) != EOF){
        long long  Fact1=1;
        long long  Fact2=1;
        while(M > 0){
        Fact1*=M;
        M--;
        }
        while(N > 0){
            Fact2*=N;
            N--;
        }
         printf("%lld\n",Fact1 + Fact2);
    }

    return 0;
}
