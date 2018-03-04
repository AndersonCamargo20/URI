#include <stdio.h>

int main() {

int X,Y;

scanf("%i %i",&X,&Y);
do{

	if(X<Y)
	printf("Crescente\n");
	else
	printf("Decrescente\n");
	scanf("%i %i",&X,&Y);

}while(X!=Y);

return 0;
}
