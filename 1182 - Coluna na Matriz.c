#include<stdio.h>

int main(){

int i, j, C;
char T;
double M[12][12], soma, media;
soma=media=0;

    scanf("%d %c", &C, &T);
    if(C>=0 && C<=11){
        for(i=0; i<12; i++){
            for(j=0; j<12; j++){
                scanf("%lf", &M[i][j]);
                if(j==C){
                    if(T=='M'){
                        media=media+M[i][C];
                    }else{
                        if(j==C){
                            if(T=='S'){
                                soma=soma+M[i][C];
                            }
                        }
                    }
                }
            }
        }
    }

    media=media/12;
    if(T=='S'){
        printf("%.1lf\n", soma);
    }else{
        if(T=='M'){
            printf("%.1lf\n", media);
        }
    }
}