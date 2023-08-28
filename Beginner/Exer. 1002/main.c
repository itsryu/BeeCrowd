#include <stdio.h>
#include <math.h>
#define PI 3.14159

int main(int argc, char *argv[]) {
    double R;
    scanf("%lf", &R);
    
    printf("A=%.4lf\n", (PI * pow(R, 2)));
}