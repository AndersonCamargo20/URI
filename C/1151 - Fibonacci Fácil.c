#include<stdio.h>

int main(){


int N, i, a, b, aux=0;

a=1;
b=1;
    scanf("%d", &N);
    printf("0");
        for(i=1; i<N; i++){
            printf(" %d", a);
            aux=a;
            a=b;
            b+=aux;
        }
        printf("\n");
}