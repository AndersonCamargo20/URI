#include<stdio.h>

int main(){

int A, B, C;

    scanf("%d %d", &A, &B);
    if(A>=1 && A<=13 && B>=1 && A<=13){
        if(A==B){
            C=B;
        }else{
            if(A>B){
                C=A;
            }else{
                if(A<B){
                    C=B;
                }
            }
        }
    }
        printf("%d\n", C);

}