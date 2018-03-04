#include <stdio.h>

int main(){

int Q, V, i, j, l;
l=j=0;

scanf("%d", &Q);
for(i=0; i<Q; i++){
    scanf("%d", &V);
    if(V==1){
        j++;
    }else{
        if(V==0){
            l++;
        }
    }
}
    if(j>l){
        printf("N\n");
    }else{
        if(l>j){
            printf("Y\n");
        }else{
            if(j==l){
                printf("N\n");
            }
        }
    }

}
