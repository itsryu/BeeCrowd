#include <stdio.h>

int main(int argc, char *argv[]) {
    int input;

    scanf("%d", &input);

    int years = input / 365;
    int months = (input % 365) / 30;
    int days = (input % 365) % 30;

    printf("%d ano(s)\n", years);
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);

    return 0;
}