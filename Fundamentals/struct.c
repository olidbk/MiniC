/* Phone Book With Struct */

#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    char *number;
} person;

int main(void) {
    person people[3];

    people[0].name = "Kelly";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-617-495-1000";

    people[2].name = "John";
    people[2].number = "+1-949-468-2750";

    // Search for name
    char *name = "Kelly";

    for (int i = 0; i < 3; i++) {
        if (strcmp(people[i].name, name) == 0) {
            printf("Found, name: %s and number: %s\n",people[i].name, people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

