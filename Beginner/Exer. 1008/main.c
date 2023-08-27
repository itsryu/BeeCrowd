#include <stdio.h>

int main(int argc, char *argv[]) {
    int number, worked;
    float received;
    
    scanf("%d", &number);
    scanf("%d", &worked);
    scanf("%f", &received);
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", (received * worked));
    return 0;
}