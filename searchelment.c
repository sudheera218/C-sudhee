#include <stdio.h>

// Recursive function to search for an element using pointers
int search(int *arr, int size, int *ptr, int key) {
    if (ptr == arr + size) 
        return -1; // Base code

    if (*ptr == key) 
        return ptr - arr; 

    return search(arr, size, ptr + 1, key); // Recursive call for next element
}

int main() {
    int size, key;

    // Get array size from user
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int arr[size];

    // Get array elements from user
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the element to search
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call recursive function to search
    int result = search(arr, size, arr, key);

    // Print the result
    if (result != -1)
        printf("Element %d found at index %d\n", key, result);
    else
        printf("Element %d not found\n", key);

    return 0;
}
