#include<stdio.h>

int main(){

int N, i, aux, j=2;

    scanf("%d", &N);
    if(N>5 && N<2000){
        for(i=1; i<=N; i++){
            if(i%2==0){
            aux=i*i;
            printf("%d^%d = %d\n", i, j, aux);
            }
        }
    }

}
