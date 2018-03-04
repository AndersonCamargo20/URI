#include<stdio.h>
#include<math.h>

int main(){

double disnt1, disnt2;
float X1, X2, Y1, Y2, p1, p2;

scanf("%f %f %f %f", &X1, &Y1, &X2, &Y2);

p1=(X2-X1)*(X2-X1);
p2=(Y2-Y1)*(Y2-Y1);

disnt1=p1+p2;
disnt2=sqrt(disnt1);

printf("%.4lf\n", disnt2);
}