#include<stdio.h>

int main(){

int N, X, i, s=0, n=0;

    scanf("%d", &N);
    if(N<10000){
        for(i=0; i<N; i++){
            scanf("%d", &X);
                if(X>-10000000 && X<10000000){
                    if(X>=10 && X<=20){
                    s++;
                        }else{
                            if(X<10 || X>20){
                            n++;
                            }
                        }
                }
            }
            printf("%d in\n", s);
            printf("%d out\n", n);
    }

}
