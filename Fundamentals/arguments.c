#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total arguments received (argc): %i\n", argc);

    // Loop through all arguments
    for (int i = 0; i < argc; i++) {
        printf("argv[%i]: %s\n", i, argv[i]);
    }

    return 0;
}

