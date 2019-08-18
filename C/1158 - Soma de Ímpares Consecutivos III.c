#include<stdio.h>

int main()
{

int  N, X, Y, i, soma=0, x=0,j=0;


    scanf("%d", &N);
    while(j!=N){
        scanf("%d", &X);
        scanf("%d", &Y);
        if(X%2!=0){
            soma=X;
        }else{
            soma=X+1;
        }
        for(i=0; i<Y; i++){
        x+=soma;
        soma+=2;

        }
    printf("%d\n", x);
    j++;
    soma=x=0;
    }

}