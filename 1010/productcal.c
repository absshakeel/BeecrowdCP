#include<stdio.h>
float totalPrice(){
    int C,I;
    float P;
    scanf("%d %d %f",&C, &I, &P);
    return I * P;
}
int main(){
    printf("VALOR A PAGAR: R$ %.2f\n",totalPrice() + totalPrice());
    return 0;

}

