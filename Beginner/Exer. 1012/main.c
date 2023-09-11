#include <stdio.h>
#define PI 3.14159

int main(int argc, char *argv[]) {
  double sideA, sideB, height;

  scanf("%lf %lf %lf", &sideA, &sideB, &height);

  printf("TRIANGULO: %.3lf\n", (sideA * height) / 2);
  printf("CIRCULO: %.3lf\n", PI * height * height);
  printf("TRAPEZIO: %.3lf\n", ((sideA + sideB) * height) / 2);
  printf("QUADRADO: %.3lf\n", sideB * sideB);
  printf("RETANGULO: %.3lf\n", sideA * sideB);

  return 0;
}