#include <stdio.h>

int main(void) {
    int X, Y, aux = 0;
    scanf("%d", &X);
    scanf("%d", &Y);

    for(int i = (X < Y ? (X + 1): (Y + 1)); X < Y ? (i < Y) : (i < X); i++) {
        if (i % 2 != 0) aux += i;
    }

    printf("%d\n", aux);
    return 0;
}
