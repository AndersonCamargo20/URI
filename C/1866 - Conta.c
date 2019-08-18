#include<stdio.h>

int main(){

int i, N, a;

    scanf("%d", &N);
    if(N>=1 && N<=1000){
        for(i=0; i<N; i++){
            scanf("%d", &a);
            if(a%2==0){
                printf("0\n");
            }else{
                printf("1\n");
            }
        }
    }
}