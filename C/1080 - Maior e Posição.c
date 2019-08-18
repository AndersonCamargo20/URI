#include <stdio.h>


int main(){

int j, i, vet[101], maior;

    for(i=0; i<100; i++){
        scanf("%d", &vet[i]);
    }
    maior=vet[0];
    for(i=0; i<100; i++){
        if(maior<vet[i]){
            maior=vet[i];
            j=i+1;
        }
    }
    printf("%d\n", maior);
    printf("%d\n", j);

    return 0;
}
