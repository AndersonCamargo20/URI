#include<stdio.h>

int main(){

    int i, n, m=0;

    for(i=0; i<5; i++){
        scanf("%d", &n);
        if(n%2==0){
            m++;
        }
    }
    printf("%d valores pares\n", m);
}
