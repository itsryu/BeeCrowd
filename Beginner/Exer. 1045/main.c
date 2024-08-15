#include <stdio.h>
#include <math.h>

int main(void) {
    float num[3], A, B, C;

    scanf("%f %f %f", &num[0], &num[1], &num[2]);

    A = num[0] > num[1] ? num[0] > num[2] ?

    if(A >= B + C) printf("NAO FORMA TRIANGULO");
    if(pow(A, 2) == pow(B, 2) + pow(C, 2)) printf("TRIANGULO RETANGULO");
    if(pow(A, 2) > pow(B, 2) + pow(C, 2)) printf("TRIANGULO OBTUSANGULO");
    if(pow(A, 2) < pow(B, 2) + pow(C, 2)) printf("TRIANGULO ACUTANGULO");

    return 0;
}