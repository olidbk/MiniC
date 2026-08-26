/* Switch And Case */

#include <stdio.h>

int main(void) {
    char operator = '/';
    int num1 = 10, num2 = 2;

    switch (operator) {
        case '+':
            printf("num1 + num2 = %d\n", num1 + num2);
            break;
        case '-':
            printf("num1 - num2 = %d\n", num1 - num2);
            break;
        case '*':
            printf("num1 * num2 = %d\n", num1 * num2);
            break;
        case '/':
            printf("num1 / num2 = %d\n", num1 / num2);
            break;
        default:
            printf("Error: Unsupported Operator.\n");
    }

    return 0;
}

