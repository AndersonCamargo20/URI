#include<stdio.h>

int main(){

int a, b, c, aux, x, y, z;

scanf("%d %d %d", &a, &b, &c);

x=a;
y=b;
z=c;
    if(x>y){
     aux=x;
     x=y;
     y=aux;
    }
    if(x>z){
     aux=x;
     x=z;
     z=aux;
    }
    if(y>z){
     aux=y;
     y=z;
     z=aux;
    }
    printf("%d\n%d\n%d\n", x, y, z);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
}
