#include<stdio.h>

int main(){

float x, y;
int i, n;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%f %f", &x, &y);
        if(x==0){
            printf("0.0\n");
        }else{
            if(y==0){
                printf("divisao impossivel\n");
            }else{
                printf("%.1f\n", x/y);
            }
        }
    }

}