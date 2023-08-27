#include <stdio.h>

int sum(int A, int B) {
    return A + B;
}

int main(int argc, char *argv[]) {
    int num[2];
    scanf("%d", &num[0]);
    scanf("%d", &num[1]);
    
    printf("SOMA = %d\n", sum(num[0], num[1]));
    return 0;
}