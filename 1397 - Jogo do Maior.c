#include <stdio.h>

int main(){

int A, B, N, i, l, c;
l=c=0;

scanf("%d", &N);
while(N!=0 || N>0){
    for(i=0; i<N; i++){
        scanf("%d %d", &A, &B);
        if(A>B){
            l++;
        }else{
            if(B>A){
                c++;
            }
        }
    }
    printf("%d %d\n", l, c);
    l=c=0;
    scanf("%d", &N);
}

}