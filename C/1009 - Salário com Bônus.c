#include <stdio.h>


int main(){

char nome[50];
double salfix, venda;


	fflush(stdin);
	gets(nome);
	scanf("%lf %lf", &salfix, &venda);
	salfix=salfix+(venda*0.15);
	printf("TOTAL = R$ %.2lf\n", salfix);
}