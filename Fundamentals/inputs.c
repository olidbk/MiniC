/* Inputs Handling */

#include <stdio.h>
#include <string.h>

int main(void) {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade); // The space before %c is necessary to consume any leftover \n.

    getchar(); // clears \n from input buffer
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0'; //changes last char from \n to \0

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}

