#include<stdio.h>

int main(){

double M[12][12], soma;
int i, j, m=10, cont=0;
char O;



    scanf("%c", &O);
    for(i=0; i<12; i++){
        for(j=0; j<12; j++){
            scanf("%lf", &M[i][j]);
        }
    }
    for(i=0; i<=10; i++){
        for(j=0; j<12; j++){
            if(j<=m){
                soma+=M[i][j];
                cont++;
            }
        }
        m--;
    }
    if(O=='M'){
        soma=soma/cont;
        printf("%.1lf\n", soma);
    }else{
        printf("%.1lf\n", soma);
    }

}