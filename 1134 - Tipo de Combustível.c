#include<stdio.h>

int main(){

int a=0, b=0, c=0, ops=0;

scanf("%d", &ops);
while(ops!=4)
{
    if(ops==1){
        a++;
    }else{
        if(ops==2){
            b++;
        }else{
            if(ops==3){
                c++;
            }
        }
    }
scanf("%d", &ops);
}
printf("MUITO OBRIGADO\n");
printf("Alcool: %d\n", a);
printf("Gasolina: %d\n", b);
printf("Diesel: %d\n", c);
}