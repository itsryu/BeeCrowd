#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance;
    double spent;

    scanf("%d", &distance);
    scanf("%lf", &spent);
    
    printf("%.3lf km/l\n", distance / spent);

    return 0;
}