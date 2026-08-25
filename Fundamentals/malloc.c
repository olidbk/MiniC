#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // Allocate memory for 5 integers
    int *ptr = malloc(n * sizeof(int));

    // Check if allocation succeeded
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use allocated memory like an array
    for (int i = 0; i < n; i++) {
        ptr[i] = (i + 1) * 10;
        printf("%d ", ptr[i]);
    }

    printf("\n");

    // Free allocated memory
    free(ptr);
    ptr = NULL;

    return 0;
}

