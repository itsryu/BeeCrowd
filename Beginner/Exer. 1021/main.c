#include <stdio.h>

int main(int argc, char *argv[]) {
    double value;
    scanf("%lf", &value);

    double notes[6] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};
    double coins[6] = {1.0, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for(int i = 0; i < 6; i++) {
        int count = value / notes[i];
        value -= count * notes[i];

        printf("%d nota(s) de R$ %.2lf\n", count, notes[i]);
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = value / coins[i];
        value -= count * coins[i];

        printf("%d moeda(s) de R$ %.2lf\n", count, coins[i]);
    }
    
    return 0;
}