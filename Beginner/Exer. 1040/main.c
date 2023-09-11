#include <stdio.h>
#define weightA 2
#define weightB 3
#define weightC 4
#define weightD 1

int main(int argc, char *argv[]) {
  float A, B, C, D, media;
  scanf("%f %f %f %f", &A, &B, &C, &D);

  media = (A * weightA + B * weightB + C * weightC + D * weightD) / (weightA + weightB + weightC + weightD);
  printf("Media: %.1f\n", media);

  if (media > 7.0) {
    printf("Aluno aprovado.\n");
  } else if (media >= 5.0) {
    float exam;
    scanf("%f", &exam);
    printf("Aluno em exame.\n");
    printf("Nota do exame: %.1f\n", exam);

    media = (media + exam) / 2;

    if (media >= 5.0) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }

    printf("Media final: %.1f\n", media);
  } else {
    printf("Aluno reprovado.\n");
  }
  return 0;
}