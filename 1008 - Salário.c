#include <stdio.h>

int main () {

float sal;
int nrof, ht;

scanf("%d", &nrof);
scanf("%d", &ht);
scanf("%f", &sal);
sal = ht * sal;
printf("NUMBER = %d", nrof);
printf("\nSALARY = U$ %.2f\n", sal);
return 0;
}
