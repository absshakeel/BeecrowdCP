#include<stdio.h>
int main(){
    int n=1, m = 0, p = 0;//n
    printf("My Number: 017..... \n 0 to Exit \n 1 Balance & Call Rate \n  2 Internet Pack \n 4 Minutes \n 5 My Offer.\n");
    while( n != 0 ){
        scanf("%d",&n);
        if(n == 1){
            printf("Balance & call rate \n 1 Main balance \n 2 offer balance \n 3 emergency balance \n 4 internet balance \n 0 to Exit \n");
            scanf("%d",&m);
            if(m == 1){
                printf("Main Balance is : 500TK \n Press 99 to back Main menu \n 0 to Back \n");
            }else if( m == 2){
                printf("Offer balance : \n 1 Recharge 200 TK to get 500 MB & 500 Minutes \n 2 Recharge 500 TK to get 20 GB & 200 Minutes  Press 9 to back Main menu \n");
            }else if( m == 3 ){
                printf("Emergency balance : \n Press 1 to get 500TK Emergency Balance \n Press 9 to back Main menu \n");
            }

        }
        if( n == 2){
            printf("Internet Pack:\n 1 500 MB 50 TK \n 2 1GB 80 TK 3 20GB 200 TK");
            scanf("%d",&p);

            if( p == 1 ){
               printf("1 500 MB 50 TK:\n Press 1 to Confirm. \n");
            }else if( p == 2){
                printf("1GB 80 TK:\n Press 1 to Confirm. \n");
            } else if( p == 3){
                printf("20GB 200 TK:\n Press 1 to Confirm. \n");
            }
        }

        else{
            printf("Thanks\n");
        }
    }


    /*
    *121#






    2 GP star
        1
        2
        3
    3 Internet Pack
    4 minutes , combo & SMS Pack
    5 My Offer
        1
        2
        3
        4
        4



    */




    return 0;
}
