#include <stdio.h>

int main(void) {
    char name[50];

    printf("Enter your name: ");
    // Reads input until it hits a whitespace.
    scanf("%s", name); 

    printf("Hello, %s!\n", name);

    return 0;
}


// ============================================================


#include <stdio.h>
#include <string.h>

int main(void) {
    const char *name = "Jin";

    if (strncmp(name, "John", 4) == 0) {
        printf("Hello, John!\n");
    }
    else {
        printf("You are not John. Go away.\n");
    }

    return 0;
}

