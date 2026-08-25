#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char s[1024] = "";

    printf("Enter string: ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    size_t length = strlen(s) + 1;

    char *t = malloc(length);

    if (t == NULL) {
        return 1;
    }

    strcpy(t, s);

    if (strlen(t) > 0) {
        t[0] = toupper((unsigned char)t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t);

    return 0;
}

