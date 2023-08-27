#include <stdio.h>

int main(int argc, char *argv[]) {
    int input, hours, minutes, seconds;

    scanf("%d", &input);

    hours = input / 3600;
    minutes = (input - hours * 3600) / 60;
    seconds = input - hours * 3600 - minutes * 60;

    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}