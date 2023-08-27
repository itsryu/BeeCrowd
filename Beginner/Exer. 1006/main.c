#include <stdio.h>

int main(int argc, char *argv[]) {
    double A, B, C, weightA = 2.0, weightB = 3.0, weightC = 5.0;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    printf("MEDIA = %.1lf\n", ((A * weightA + B * weightB + C * weightC)) / (weightA + weightB + weightC));
    return 0;
}