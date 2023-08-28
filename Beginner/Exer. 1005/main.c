#include <stdio.h>
#define weightA 3.5
#define weightB 7.5

int main(int argc, char *argv[]) {
    double A, B;
    
    scanf("%lf", &A);
    scanf("%lf", &B);
    
    printf("MEDIA = %.5lf\n", ((A * weightA + B * weightB) / (weightA + weightB)));
    return 0;
}