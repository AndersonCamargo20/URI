#include<stdio.h>

int main(){
    int i=0, j=0;
    float n, media, soma;


    for(i=0; i<6; i++){
        scanf("%f", &n);
        if(n>0){
            j++;
            soma=soma+n;
        }
    }
    media=soma/j;
    printf("%d valores positivos\n", j);
    printf("%.1f\n", media);
}