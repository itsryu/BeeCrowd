#include <stdio.h>

int main(void) {
    int num, cont = 0;

    scanf("%d", &num);

    for(int i = num; cont < 6; i++) {
        if(i % 2 != 0) {
            printf("%d\n", i);
            cont++;
        }
    }

    return 0;
}
