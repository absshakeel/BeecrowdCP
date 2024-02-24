#include<stdio.h>
int main(){
    int N;
    unsigned long long int Fact=1;
    scanf("%d",&N);
    while(N > 0){
        Fact*=N;
        N--;
    }
    printf("%d\n",Fact);
    return 0;
}
