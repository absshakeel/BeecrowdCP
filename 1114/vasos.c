#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    printf("Hello: %d",n /9);
     for(int i = 1; i <= n;i++){

        if(i > 9){
            int r = n - 9;
             printf("9 is up\n");
            for(int j=1;j<=r;j++){
                printf("J is: %d\n",j);
                printf("%d\n",sum+=j);
            }
            break;
        }
        printf("I is: %d\n",i);
        printf("%d\n",sum+=i);

    }

    printf("%d",sum);

}
