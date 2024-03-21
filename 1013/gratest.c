#include<stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    int gratest;
    scanf("%d %d %d",&a,&b,&c);
    gratest = (a+b+abs(a-b))/2;
    gratest = (gratest+c+abs(gratest-c)) / 2;
    printf("%d eh o maior\n",gratest);
    return 0;

}
