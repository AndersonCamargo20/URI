#include <stdio.h>

#define PI 3.14159


int main(){

float A, B, C, area;

    scanf("%f %f %f", &A, &B, &C);
    area=A*C/2;
    printf("TRIANGULO: %.3f\n", area);
    area=PI*C*C;
    printf("CIRCULO: %.3f\n", area);
    area=(A+B)*C/2;
    printf("TRAPEZIO: %.3f\n", area);
    area=B*B;
    printf("QUADRADO: %.3f\n", area);
    area=A*B;
    printf("RETANGULO: %.3f\n", area);

return 0;

}
