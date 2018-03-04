#include<stdio.h>

int main(){
    int i, n, P, I, S, M;

    P=I=S=M=0;

    for(i=0; i<5; i++){
        scanf("%d", &n);
        if(n>0){
            S++;
        }
        if(n<0){
            M++;
        }
        if(n%2==0){
            P++;
        }else{
            I++;
        }

    }
    printf("%d valor(es) par(es)\n", P);
    printf("%d valor(es) impar(es)\n", I);
    printf("%d valor(es) positivo(s)\n", S);
    printf("%d valor(es) negativo(s)\n", M);
}