#include <stdio.h>


int main(){


int A, B, C, D, somai, somaj;


	scanf("%d %d %d %d", &A, &B, &C, &D);
	somai=C+D;
	somaj=A+B;
	if(B>C && D>A && somai>somaj && somai>0 && somaj>0 && A%2==0){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");;
	}
return 0;
}