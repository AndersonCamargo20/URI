#include <stdio.h>

int main(){

int j, l, N, V, i;
l=j=0;

scanf("%d", &N);
while(N>0 && N!=0){
    for(i=0; i<N; i++){
    scanf("%d", &V);
    if(V==1){
        j++;
    }else{
        if(V==0){
            l++;
        }
    }
}
printf("Mary won %d times and John won %d times\n", l, j);
l=j=0;
scanf("%d", &N);
}



}