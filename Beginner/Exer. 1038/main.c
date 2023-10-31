#include <stdio.h>

struct Produto {
  int code;
  double price;
};

double calc(struct Produto produto, int amount);

int main(int argc, char *argv[]) {
  int amount, code;
  scanf("%d %d", &code, &amount);

  struct Produto p1;

  switch (code) {
    case 1:
      p1.code = 1;
      p1.price = 4.00;
      break;
    case 2:
      p1.code = 2;
      p1.price = 4.50;
      break;
    case 3:
      p1.code = 3;
      p1.price = 5.00;
      break;
    case 4:
      p1.code = 4;
      p1.price = 2.00;
      break;
    case 5:
      p1.code = 5;
      p1.price = 1.50;
      break;
    default:
      break;
  }

  double total = calc(p1, amount);

  printf("Total: R$ %.2lf\n", total);
  return 0;
}

double calc(struct Produto produto, int amount) {
  return produto.price * amount;
}