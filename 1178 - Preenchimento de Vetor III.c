#include<stdio.h>

int main(){

double  X, N[100];
int i;

    scanf("%lf", &X);
    N[0]=X;
    printf("N[%d] = %.4lf\n", 0, N[0]);
    for(i=1; i<100; i++){
        X=X/2;
        N[i]=X;
        printf("N[%d] = %.4lf\n", i, N[i]);
    }
}