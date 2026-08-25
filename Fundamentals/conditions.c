#include <stdio.h>

int main(void) {
    int a = 5, b = 10;
    int max = (a > b) ? a : b;

    printf("max = %i\n", max);

    return 0;
}


// ====================================================


#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool isLoggedIn = true;
    bool isAdmin = false;
    int securityLevel = 3;

    if (isLoggedIn && (isAdmin || securityLevel <= 2)) {
        printf("Access granted\n");
    }
    else {
        printf("Access denied\n");
    }

    return 0;
}


// ====================================================


#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int age = 20;
    bool is_citizen = true;

    if (age >= 18) {
        printf("Old enough to vote.\n");

        if (is_citizen) {
            printf("And you are a citizen, so you can vote!\n");
        }
        else {
            printf("But you must be a citizen to vote.\n");
        } 
    }
    else {
        printf("Not old enough to vote.\n");
    }

    return 0;
}


// ====================================================


#include <stdio.h>

void guess_number(int guess);

int main(void) {
    guess_number(500);
    guess_number(600);
    guess_number(555);

    return 0;
}

void guess_number(int guess) {
    if (guess > 555) {
        printf("Your guess is too high.\n");
    }
    else if (guess < 555) {
        printf("Your guess is too low.\n");
    }
    else {
        printf("Correct. You guessed it!\n");
    }
}

