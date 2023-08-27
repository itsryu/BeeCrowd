#include <stdio.h>
#define KMPERL 12.0

int main(int argc, char *argv[]) {
    int hours;
    int speed;

    scanf("%d", &hours);
    scanf("%d", &speed);

    printf("%.3f\n", (hours * speed) / KMPERL);
    return 0;
}