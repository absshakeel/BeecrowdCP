#include<stdio.h>
int main(){
    char empName[10];
    double S,P;
    scanf("%s %lf %lf",&empName, &S, &P);
    printf("TOTAL = R$ %.2lf\n",S + 0.15 * P);
    return 0;

}
