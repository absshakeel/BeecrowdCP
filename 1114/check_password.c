#include<stdio.h>
int main(){
    int N;
    while(N != 2002){
        scanf("%d",&N);
        if(N == 2002){
            printf("Acesso Permitido\n");
        }else{
            printf("Senha Invalida\n");
        }
    }
    return 0;
}

