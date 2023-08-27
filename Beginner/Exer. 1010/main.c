#include <stdio.h>

int main(int argc, char *argv[]) {
    int code[2], unit[2], i;
    double price[2];
    
    for(i = 0; i < 2; i++) {
        fflush(stdin);
        scanf("%d %d %lf", &code[i], &unit[i], &price[i]);
    }
    
    printf("VALOR A PAGAR: R$ %.2lf\n", ((unit[0] * price[0]) + (unit[1] * price[1])));
    
    return 0;
}