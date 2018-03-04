#include<stdio.h>

int main(){
    int i, j=0;
    float n;


    for(i=0; i<6; i++){
        scanf("%f", &n);
        if(n>0){
            j++;
        }
    }
    printf("%d valores positivos\n", j);
}
