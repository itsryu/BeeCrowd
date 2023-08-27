#include <stdio.h>

int main(int argc, char *argv[]) {
    double A, B, weightA = 3.5, weightB = 7.5;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    printf("MEDIA = %.5lf\n", ((A * weightA + B * weightB) / (weightA + weightB)));
    return 0;
}