/* Recursion */

#include <stdio.h>

void draw(int n);

int main(void) {
    draw(8);
}

void draw(int n) {
    // If nothing to draw
    if (n <= 0) {
        return;
    }

    // Draw pyramid of height n - 1
    draw(n - 1);

    // Draw one more row of width n
    for (int i = 0; i < n; i++) {
        printf("#");
    }
    printf("\n");
}

