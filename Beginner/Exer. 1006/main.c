#include <stdio.h>
#define weightA 2.0
#define weightB 3.0
#define weightC 5.0

int main(int argc, char *argv[]) {
    double A, B, C;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    
    printf("MEDIA = %.1lf\n", ((A * weightA + B * weightB + C * weightC)) / (weightA + weightB + weightC));
    return 0;
}