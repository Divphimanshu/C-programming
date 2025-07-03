#include <stdio.h>

int main() {
    // Integer types
    int age = 20;                    // int: for whole numbers
    short int temp = -10;           // short int: smaller range
    long int population = 7800000000; // long int: larger range
    unsigned int score = 95;        // unsigned int: only positive numbers

    // Floating-point types
    float height = 5.9f;            // float: single precision
    double pi = 3.1415926535;       // double: double precision
    long double big_pi = 3.141592653589793238; // long double: higher precision

    // Character type
    char grade = 'A';               // char: stores a single character

    // Boolean type (_Bool introduced in C99)
    _Bool isPassed = 1;             // 1 means true, 0 means false

    // Constant
    const float GRAVITY = 9.8;      // constant value, cannot be changed

    // Print all variable values
    printf("=== Integer Types ===\n");
    printf("Age: %d years\n", age);
    printf("Temperature: %hd°C\n", temp);
    printf("World Population: %ld\n", population);
    printf("Score: %u out of 100\n", score);

    printf("\n=== Floating Point Types ===\n");
    printf("Height: %.1f ft\n", height);
    printf("Value of Pi: %.10lf\n", pi);
    printf("Big Pi: %.18Lf\n", big_pi);

    printf("\n=== Character and Boolean ===\n");
    printf("Grade: %c\n", grade);
    printf("Passed: %s\n", isPassed ? "Yes" : "No");

    printf("\n=== Constant ===\n");
    printf("Gravity: %.1f m/s²\n", GRAVITY);

    // Size of data types using sizeof()
    printf("\n=== Size of Data Types (in bytes) ===\n");
    printf("int: %lu\n", sizeof(int));
    printf("short int: %lu\n", sizeof(short int));
    printf("long int: %lu\n", sizeof(long int));
    printf("unsigned int: %lu\n", sizeof(unsigned int));
    printf("float: %lu\n", sizeof(float));
    printf("double: %lu\n", sizeof(double));
    printf("long double: %lu\n", sizeof(long double));
    printf("char: %lu\n", sizeof(char));
    printf("_Bool: %lu\n", sizeof(_Bool));

    return 0;
}
