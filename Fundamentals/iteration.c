// Draws a pyramid using iteration

#include <stdio.h>

void draw(int n);

int main(void) {
    draw(8);
}

void draw(int n) {
    // Draw pyramid of height n
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i + 1; j++) {
            printf("#");
        }
        printf("\n");
    }
}

