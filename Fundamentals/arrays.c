// Declaration and Initialization

// Declaration with size (contains garbage values until initialized)
int scores[5]; 

// Declaration and complete initialization
int grades[5] = {90, 85, 92, 78, 88}; 

// Automatic sizing based on elements
int ages[] = {20, 22, 19}; 

// Partial initialization (remaining elements automatically set to 0)
int numbers[5] = {10, 20};


// ==============================================================================


// Accessing and Modifying Elements

#include <stdio.h>

int main(void) {
    int my_numbers[] = {25, 50, 75, 100};

    // Accessing elements
    printf("%d\n", my_numbers[0]);

    // Modifying elements
    my_numbers[1] = 55;

    return 0;
}


// ==============================================================================


// Looping Through an Array using for loop

#include <stdio.h>

int main(void) {
    int arr[] = {10, 20, 30, 40};

    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


// Looping Through an Array using while loop

// Because C does not track array boundaries automatically, use the 'sizeof' operator to calculate the number of elements

#include <stdio.h>

int main(void) {
    int arr[5];
    int length = sizeof(arr) / sizeof(arr[0]);

    int i = 0;
    while (i < length) {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");

    return 0;
}


// ==============================================================================


// Multi-Dimensional Arrays (Matrices)

#include <stdio.h>

int main(void) {
    // Declaring a 2D array with 2 rows and 3 columns
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing element at row 1, column 2 (outputs 6)
    printf("%d\n", matrix[1][2]); 

    return 0;
}

