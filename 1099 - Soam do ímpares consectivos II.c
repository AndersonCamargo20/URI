#include <stdio.h>

int main(){

    int N,X,Y,j,b,soma=0;
    scanf("%d", &N);
    for(j=1;j<=N;j++){
            
        scanf("%d %d",&X,&Y);
        if(X==Y){
            soma=0;
            printf("%d\n",soma);
        }else if(X<Y){
            for(b=X+1,soma=0;b<Y;b++){
                if(b%2==1||b%2==-1)
                    soma+=b;
            }
            printf("%d\n",soma);
        }else{
            for(b=Y+1,soma=0;b<X;b++){
                if(b%2==1||b%2==-1)
                    soma+=b;
            }
            printf("%d\n",soma);
        }
    }
    return 0;
}