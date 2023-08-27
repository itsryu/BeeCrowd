#include <stdio.h>
#define PI 3.14159

int main(int argc, char *argv[]) {
    double R;

    scanf("%lf", &R);
    printf("VOLUME = %.3lf\n", ((4/3.0) * PI * (R * R * R))); // (4/3) * π * R³

    return 0;
}