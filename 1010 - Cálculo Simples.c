#include <stdio.h>

int main () {

	int cod1,cod2,qtdp1,qtdp2;
	double vlrunt1, vlrunt2;

	scanf("%d",&cod1);
	scanf("%d",&qtdp1);
	scanf("%lf",&vlrunt1);
	scanf("%d",&cod2);
	scanf("%d",&qtdp2);
	scanf("%lf",&vlrunt2);
	printf("VALOR A PAGAR: R$ %.2lf\n",(qtdp1 * vlrunt1 + qtdp2 * vlrunt2));
return 0;
}