#include <stdio.h>

int main(int argc, char *argv[]) {
    int notes[7] = {100, 50, 20, 10, 5, 2, 1}, note;

    scanf("%d", &note);
    printf("%d\n", note);

    for(int i = 0; i < 7; i++) {
        int count = note / notes[i];
        note %= notes[i];

        printf("%d nota(s) de R$ %d,00\n", count, notes[i]);
    }
    
    return 0;
}