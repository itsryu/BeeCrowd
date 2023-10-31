#include <stdio.h>

int main(void) {
    int num[3], input[3];
    
    scanf("%d %d %d", &num[0], &num[1], &num[2]);

    for (int i = 0; i < 3; i++) {
        input[i] = num[i];
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (num[j] > num[j + 1]) {
                int temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n", num[0], num[1], num[2]);
    printf("%d\n%d\n%d\n", input[0], input[1], input[2]);

    return 0;
}