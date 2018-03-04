#include<stdio.h>

int main(){

int G, I, contI=0, contG=0, ops=1, empate=0, grenal=0;

    do{
        scanf("%d %d", &I, &G);
        if(G>I){
            contG++;
        }else{
            if(I>G){
                contI++;
            }else{
                empate++;
            }
        }
        grenal++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &ops);
    }while(ops==1);
    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", contI);
    printf("Gremio:%d\n", contG);
    printf("Empates:%d\n", empate);

    if(contG>contI){
        printf("Gremio venceu mais\n");
    }else{
        if(contI>contG){
            printf("Inter venceu mais\n");
        }else{
            if(contG==contI){
                printf("Nao houve vencedor\n");
            }
        }
    }
return 0;
}