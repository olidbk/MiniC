#include <stdio.h>
#include <string.h>

int main() {
    char type[1024] = "";
    printf("Enter data type: ");
    fgets(type, sizeof(type), stdin);
    type[strcspn(type, "\n")] = '\0';

    size_t dataSize;
    if (strcmp(type, "int") == 0) dataSize = sizeof(int);
    else if (strcmp(type, "char") == 0) dataSize = sizeof(char);
    else if (strcmp(type, "float") == 0) dataSize = sizeof(float);
    else if (strcmp(type, "double") == 0) dataSize = sizeof(double);
    else if (strcmp(type, "long") == 0) dataSize = sizeof(long);
    else if (strcmp(type, "short") == 0) dataSize = sizeof(short);
    else {
        printf("Unknown type: %s\n", type);
        return 1;
    }

    printf("The size of an %s on this machine is: %zu bytes\n", type, dataSize);
    return 0;
}

