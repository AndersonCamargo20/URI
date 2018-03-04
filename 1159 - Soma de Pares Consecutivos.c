#include<stdio.h>

int main()
{

int  n,i, soma=0, x=0;

    scanf("%d", &n);
    while(n!=0){
        if(n%2==0){
            soma=n;
        }else{
            soma=n+1;
        }
        for(i=0; i<5; i++){
        x+=soma;
        soma+=2;

        }
    printf("%d\n", x);
    scanf("%d", &n);
    soma=x=0;
    }
}