#include <stdio.h>

#define SIZE 100  // Maximum size of the array

/*
    📘 Notes:
    - An array is a collection of elements of the same data type stored in contiguous memory.
    - Arrays in C are indexed starting from 0.
    - Functions help modularize operations like insert, delete, search, etc.
*/

// Function prototypes
void display(int arr[], int n);
int insert(int arr[], int *n, int pos, int value);
int delete(int arr[], int *n, int pos);
int search(int arr[], int n, int key);

int main() {
    int arr[SIZE], n, choice, pos, value, key, result;

    // Initial input from user
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        printf("\n===== Array Operations Menu =====\n");
        printf("1. Display Array\n");
        printf("2. Insert Element\n");
        printf("3. Delete Element\n");
        printf("4. Search Element\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                display(arr, n);
                break;

            case 2:
                printf("Enter position to insert (0 to %d): ", n);
                scanf("%d", &pos);
                printf("Enter value to insert: ");
                scanf("%d", &value);
                if (insert(arr, &n, pos, value))
                    printf("Element inserted successfully.\n");
                else
                    printf("Invalid position!\n");
                break;

            case 3:
                printf("Enter position to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (delete(arr, &n, pos))
                    printf("Element deleted successfully.\n");
                else
                    printf("Invalid position!\n");
                break;

            case 4:
                printf("Enter element to search: ");
                scanf("%d", &key);
                result = search(arr, n, key);
                if (result != -1)
                    printf("Element found at index %d.\n", result);
                else
                    printf("Element not found.\n");
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 5);

    return 0;
}

/*
    🔧 Display array elements
*/
void display(int arr[], int n) {
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
    🔧 Insert element at a given position
    Returns 1 if successful, 0 if invalid
*/
int insert(int arr[], int *n, int pos, int value) {
    if (pos < 0 || pos > *n || *n >= SIZE)
        return 0;

    // Shift elements to the right
    for (int i = *n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = value;
    (*n)++;
    return 1;
}

/*
    🔧 Delete element at a given position
    Returns 1 if successful, 0 if invalid
*/
int delete(int arr[], int *n, int pos) {
    if (pos < 0 || pos >= *n)
        return 0;

    // Shift elements to the left
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
    return 1;
}

/*
    🔧 Search for an element and return its index
    Returns -1 if not found
*/
int search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}
