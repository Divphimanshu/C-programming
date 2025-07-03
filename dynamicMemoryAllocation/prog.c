#include <stdio.h>
#include <stdlib.h>  // Required for malloc, calloc, realloc, free

int main() {
    int n;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation using malloc
    // malloc allocates memory but does NOT initialize it
    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit program if allocation failed
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Resize allocated memory using realloc
    printf("Enter new size for the array: ");
    int newSize;
    scanf("%d", &newSize);

    int *temp = (int*) realloc(ptr, newSize * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(ptr);  // Free original block before exiting
        return 1;
    } else {
        ptr = temp;  // Update pointer to new block
    }

    // If newSize > n, initialize new elements
    if (newSize > n) {
        for (int i = n; i < newSize; i++) {
            ptr[i] = 0; // Initialize new elements to zero
        }
    }

    printf("Array after resizing:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Free dynamically allocated memory
    free(ptr);
    ptr = NULL; // Good practice to avoid dangling pointer

    return 0;
}
