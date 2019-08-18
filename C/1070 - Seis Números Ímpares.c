#include<stdio.h>

int main(){
    int i, X, j=0;

    scanf("%d", &X);
    for(i=0; j<6; i++){
        X++;
        if(X%2!=0){
            printf("%d\n", X);
            j++;
        }
    }
}