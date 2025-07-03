#include <stdio.h>

/*
    📘 Function in C:
    - A function is a reusable block of code that performs a specific task.
    - It helps make code modular and easier to debug.
    - There are 3 main parts to a function:
        1. Declaration (Prototype)
        2. Definition (Actual body of the function)
        3. Calling (Using the function in main or other functions)
*/

// Function Declaration (Prototype)
int add(int a, int b); // tells the compiler that a function named 'add' exists

int main() {
    int num1, num2, result;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Function Call — we are using the function 'add' here
    result = add(num1, num2);

    // Displaying the result
    printf("Sum = %d\n", result);

    return 0;
}

// Function Definition — where the logic of the function is written
int add(int a, int b) {
    /*
        a and b are parameters.
        This function returns the sum of a and b.
    */
    return a + b; // returning the result to the calling function
}
