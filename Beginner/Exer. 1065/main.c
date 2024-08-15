#include <stdio.h>
#define TAM 5

int main(void) {
    int num[TAM], cont = 0;

    for(int i = 0; i < TAM; i++) {
        scanf("%d", &num[i]);
        if(num[i] % 2 == 0) cont++;
    }

    printf("%d valores pares\n", cont);
    
    return 0;
}