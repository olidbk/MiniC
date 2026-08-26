#include <stdio.h>
#include <stdlib.h>

// A "box" that holds a number and points to the next box
struct Node {
    int data;
    struct Node *next;
};

int main() {
    // Create 3 boxes by hand
    struct Node *first = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    // Fill in the data
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Link them together: first -> second -> third -> NULL
    first->next = second;
    second->next = third;
    third->next = NULL;   // NULL means "nothing after this"

    // Walk through the list and print each value
    struct Node *current = first;
    while (current != NULL) {
        printf("%d\n", current->data);
        current = current->next;
    }

    // Free the memory when done
    free(first);
    free(second);
    free(third);

    return 0;
}

