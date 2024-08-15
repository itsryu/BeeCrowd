#include <math.h>
#include <stdio.h>

int main(void) {
  float value;
  scanf("%f", &value);

  int notes[6] = {100, 50, 20, 10, 5, 2};
  float coins[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

  printf("NOTAS:\n");
  for (int i = 0; i < (sizeof(notes) / sizeof(int)); i++) {
    int count = value / notes[i];
    
    printf("%d nota(s) de R$ %d.00\n", count, notes[i]);

    value -= count * notes[i];
  }

  printf("MOEDAS:\n");
  for (int i = 0; i < (sizeof(coins) / sizeof(float)); i++) {
    int count = value / coins[i];

    printf("%d moeda(s) de R$ %.2f\n", count, coins[i]);

    value -= count * coins[i];
  }

  return 0;
}
