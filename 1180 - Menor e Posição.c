#include <stdio.h>


int main(){

int vd, i=0, menor, posicao, X[1000];

    scanf("%d", &vd);
    for(i=0; i<vd; i++){
        scanf("%d", &X[i]);
        if(X[i]<menor){
            menor=X[i];
            posicao=i;
        }
    }
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);
}
