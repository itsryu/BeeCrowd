#include <stdio.h>

int main(int argc, char *argv[]) {
    char name[256];
    double salary;
    double sales;
    
    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &sales);
    
    
    printf("TOTAL = R$ %.2lf\n", (salary + (sales * 0.15)));
    return 0;
}