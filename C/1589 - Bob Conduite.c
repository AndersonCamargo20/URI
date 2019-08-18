#include<stdio.h>

int main(){

int i, T, R1, R2, soma;

    scanf("%d", &T);        
        if(T<=10000){
            for(i=0; i<T; i++){
                scanf("%d %d", &R1, &R2);
                soma=R1+R2;
                printf("%d\n", soma);
            }
        }
}