#include <stdio.h>

int main(int argc, char *argv[]) {
    int num[4], x;
    
    for(x = 0; x < 4; x++) {
        scanf("%d", &num[x]);
    }
    
    printf("DIFERENCA = %d\n", (num[0] * num[1] - num[2] * num[3]));
}