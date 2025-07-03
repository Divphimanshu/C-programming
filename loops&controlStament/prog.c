#include <stdio.h>

int main() {
    int num = 7;

    // ========================
    // 1. IF statement
    // ========================
    printf("=== IF Statement ===\n");
    if (num > 0) {
        printf("Number is positive.\n");
    }

    // ========================
    // 2. IF-ELSE statement
    // ========================
    printf("\n=== IF-ELSE Statement ===\n");
    if (num % 2 == 0) {
        printf("Number is even.\n");
    } else {
        printf("Number is odd.\n");
    }

    // ========================
    // 3. IF-ELSE IF Ladder
    // ========================
    printf("\n=== IF-ELSE IF Ladder ===\n");
    if (num < 0) {
        printf("Negative number\n");
    } else if (num == 0) {
        printf("Zero\n");
    } else {
        printf("Positive number\n");
    }

    // ========================
    // 4. SWITCH statement
    // ========================
    printf("\n=== SWITCH Statement ===\n");
    int day = 3;
    switch (day) {
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        default: printf("Weekend\n");
    }

    // ========================
    // 5. FOR loop
    // ========================
    printf("\n=== FOR Loop ===\n");
    for (int i = 1; i <= 5; i++) {
        printf("i = %d\n", i);
    }

    // ========================
    // 6. WHILE loop
    // ========================
    printf("\n=== WHILE Loop ===\n");
    int count = 1;
    while (count <= 5) {
        printf("count = %d\n", count);
        count++;
    }

    // ========================
    // 7. DO-WHILE loop
    // ========================
    printf("\n=== DO-WHILE Loop ===\n");
    int x = 1;
    do {
        printf("x = %d\n", x);
        x++;
    } while (x <= 5);

    // ========================
    // 8. BREAK and CONTINUE
    // ========================
    printf("\n=== BREAK and CONTINUE ===\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 3)
            continue; // skip number 3
        if (i == 7)
            break;    // exit loop at 7
        printf("%d ", i);
    }
    printf("\n");

    // ========================
    // 9. GOTO statement
    // ========================
    printf("\n=== GOTO Statement ===\n");
    int val = 0;
    if (val == 0) {
        goto skip;
    }
    printf("This line will be skipped.\n");

skip:
    printf("Jumped to this label using goto.\n");

    return 0;
}
