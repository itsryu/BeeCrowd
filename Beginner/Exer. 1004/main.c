#include <stdio.h>

int main(int argc, char *argv[]) {
    int prod[2];
    scanf("%d", &prod[0]);
    scanf("%d", &prod[1]);
    
    printf("PROD = %d\n", (prod[0] * prod[1]));
    return 0;
}