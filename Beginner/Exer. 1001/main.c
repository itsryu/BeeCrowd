#include <stdio.h>

int main(int argc, char *argv[]) {
  int num[2];
  scanf("%d", &num[0]);
  scanf("%d", &num[1]);

  printf("X = %d\n", (num[0] + num[1]));
  return 0;
}