#include <stdio.h>

int main() {
    int a = 10, b = 5, c;

    // 1. Arithmetic Operators
    printf("=== Arithmetic Operators ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b); // %% is used to print %

    // 2. Relational (Comparison) Operators
    printf("\n=== Relational Operators ===\n");
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);
    printf("a > b: %d\n", a > b);
    printf("a < b: %d\n", a < b);
    printf("a >= b: %d\n", a >= b);
    printf("a <= b: %d\n", a <= b);

    // 3. Logical Operators
    printf("\n=== Logical Operators ===\n");
    printf("(a > 0 && b > 0): %d\n", (a > 0 && b > 0)); // Logical AND
    printf("(a > 0 || b < 0): %d\n", (a > 0 || b < 0)); // Logical OR
    printf("!(a == b): %d\n", !(a == b));               // Logical NOT

    // 4. Bitwise Operators
    printf("\n=== Bitwise Operators ===\n");
    printf("a & b = %d\n", a & b);  // Bitwise AND
    printf("a | b = %d\n", a | b);  // Bitwise OR
    printf("a ^ b = %d\n", a ^ b);  // Bitwise XOR
    printf("~a = %d\n", ~a);        // Bitwise NOT
    printf("a << 1 = %d\n", a << 1); // Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift

    // 5. Assignment Operators
    printf("\n=== Assignment Operators ===\n");
    c = a;             // =
    printf("c = %d\n", c);
    c += b;            // c = c + b
    printf("c += b: %d\n", c);
    c -= b;            // c = c - b
    printf("c -= b: %d\n", c);
    c *= b;            // c = c * b
    printf("c *= b: %d\n", c);
    c /= b;            // c = c / b
    printf("c /= b: %d\n", c);
    c %= b;            // c = c % b
    printf("c %%= b: %d\n", c);

    // 6. Unary Operators
    printf("\n=== Unary Operators ===\n");
    int x = 5;
    printf("x = %d\n", x);
    printf("++x = %d\n", ++x);  // Pre-increment
    printf("x++ = %d\n", x++);  // Post-increment
    printf("After x++: %d\n", x);
    printf("--x = %d\n", --x);  // Pre-decrement
    printf("x-- = %d\n", x--);  // Post-decrement
    printf("After x--: %d\n", x);
    printf("-x = %d\n", -x);    // Unary minus

    // 7. Ternary Operator
    printf("\n=== Ternary Operator ===\n");
    int max = (a > b) ? a : b;
    printf("Max of a and b is: %d\n", max);

    // 8. sizeof Operator
    printf("\n=== sizeof Operator ===\n");
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of char: %lu bytes\n", sizeof(char));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));

    return 0;
}
