#include <stdio.h>
#include <string.h>  // Header file for string functions

/*
    📘 NOTES:
    ➤ In C, strings are arrays of characters ending with a null character '\0'.
    ➤ C provides built-in string functions in <string.h> like:
        - strlen() — to find length
        - strcpy() — to copy strings
        - strcat() — to concatenate
        - strcmp() — to compare
    ➤ You can also implement custom string operations using functions.
*/

// Function Prototypes
void inputString(char str[]);
void displayString(char str[]);
int getLength(char str[]);
void copyString(char source[], char dest[]);
void concatStrings(char str1[], char str2[]);
int compareStrings(char str1[], char str2[]);

int main() {
    char str1[100], str2[100], copied[100];
    int choice, result;

    // Input first string
    printf("Enter first string: ");
    inputString(str1);

    // Input second string
    printf("Enter second string: ");
    inputString(str2);

    do {
        printf("\n===== String Operations Menu =====\n");
        printf("1. Display Strings\n");
        printf("2. Length of Strings\n");
        printf("3. Copy String 1 to Another\n");
        printf("4. Concatenate String 2 to String 1\n");
        printf("5. Compare Strings\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // clear newline from buffer

        switch (choice) {
            case 1:
                printf("String 1: ");
                displayString(str1);
                printf("String 2: ");
                displayString(str2);
                break;

            case 2:
                printf("Length of String 1: %d\n", getLength(str1));
                printf("Length of String 2: %d\n", getLength(str2));
                break;

            case 3:
                copyString(str1, copied);
                printf("Copied String 1 into: %s\n", copied);
                break;

            case 4:
                concatStrings(str1, str2);
                printf("After Concatenation, String 1: %s\n", str1);
                break;

            case 5:
                result = compareStrings(str1, str2);
                if (result == 0)
                    printf("Strings are equal.\n");
                else if (result > 0)
                    printf("String 1 is greater than String 2.\n");
                else
                    printf("String 1 is less than String 2.\n");
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 6);

    return 0;
}

/*
    🔧 Function to input a string using fgets (safer than gets)
*/
void inputString(char str[]) {
    fgets(str, 100, stdin);

    // Remove newline character from input (if present)
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
        str[len - 1] = '\0';
}

/*
    🔧 Function to display a string
*/
void displayString(char str[]) {
    printf("%s\n", str);
}

/*
    🔧 Function to calculate length of string (custom, like strlen)
*/
int getLength(char str[]) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

/*
    🔧 Function to copy a string (custom version of strcpy)
*/
void copyString(char source[], char dest[]) {
    int i = 0;
    while ((dest[i] = source[i]) != '\0') {
        i++;
    }
}

/*
    🔧 Function to concatenate two strings (like strcat)
*/
void concatStrings(char str1[], char str2[]) {
    int i = getLength(str1);
    int j = 0;
    while (str2[j] != '\0') {
        str1[i++] = str2[j++];
    }
    str1[i] = '\0';  // null terminate the result
}

/*
    🔧 Function to compare two strings (like strcmp)
    Returns:
    0  -> if equal
    >0 -> if str1 > str2
    <0 -> if str1 < str2
*/
int compareStrings(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i])
            return str1[i] - str2[i];
        i++;
    }
    return str1[i] - str2[i];
}
