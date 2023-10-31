#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, x;
    char y[4];

    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %s", &x, y);

        printf("Case %d:\n", i);

        if (strcmp(y, "bin") == 0) {
            printf("%d dec\n", strtol(y, NULL, 2));
            printf("%x hex\n", strtol(y, NULL, 2));
        } else if (strcmp(y, "dec") == 0) {
            printf("%x hex\n", x);
            printf("%d bin\n", x);
        } else {
            printf("%d dec\n", x);
            printf("%d bin\n", x);
        }

        printf("\n");
    }

    return 0;
}
