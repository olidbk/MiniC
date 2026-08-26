/* Files Handling */

#include <stdio.h>
#include <string.h>

int main(void) {
    // Open CSV file
    FILE *file = fopen("phonebook.csv", "a");
    if (file == NULL) {
        return 1;
    }

    // Get name and number
    char *name = "John";
    char *number = "(212)123-456-789";

    // Print to file
    fprintf(file, "%s,%s\n", name, number);

    // Close file
    fclose(file);

    return 0;
}

