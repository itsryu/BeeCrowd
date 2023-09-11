#include <stdio.h>

int main(void) {
    int input;
    char month[12][11] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    scanf("%d", &input);

    printf("%s\n", month[input - 1]);
    return 0;
}