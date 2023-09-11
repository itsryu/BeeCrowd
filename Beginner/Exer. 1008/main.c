#include <stdio.h>

int main(int argc, char *argv[]) {
    int number, worked;
    double received;
    
    scanf("%d", &number);
    scanf("%d", &worked);
    scanf("%lf", &received);
    
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", (received * worked));
    return 0;
}