#include <math.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
  double A, B, C, delta, R1, R2;

  scanf("%lf %lf %lf", &A, &B, &C);

  delta = pow(B, 2) - (4 * A * C);

  if (delta < 0 || A == 0) {
    printf("Impossivel calcular\n");
  } else {
    R1 = (-B + sqrt(delta)) / (2 * A);
    R2 = (-B - sqrt(delta)) / (2 * A);

    printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
  }

  return 0;
}