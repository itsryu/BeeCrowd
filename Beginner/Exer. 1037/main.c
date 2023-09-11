#include <stdio.h>

int main(int argc, char *argv[]) {
  double number;
  scanf("%lf", &number);

  if (number < 0 || number > 100) {
    printf("Fora de intervalo\n");
  } else {
    const char *intervals[] = {"Intervalo [0,25]\n", "Intervalo (25,50]\n", "Intervalo (50,75]\n", "Intervalo (75,100]\n"};
    
    printf("%s", intervals[((int)(number - 1e-9) / 25)]);
  }
}