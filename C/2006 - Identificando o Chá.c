#include<stdio.h>

int main(){

int A, B, C, D, E, T, n=0;

    scanf("%d", &T);
    if(T>=1 && T<=4){
        scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
        if(A>=1 && A<=4 && B>=1 && B<=4 && C>=1 && C<=4 && D>=1 && D<=4 && E>=1 && E<=4){
            if(A==T){
                n++;
            }
            if(B==T){
                n++;
            }
            if(C==T){
                n++;
            }
            if(D==T){
                n++;
            }
            if(E==T){
                n++;
            }
        }
    }

    printf("%d\n", n);
}