#include <stdio.h>

int binarySearch(int numbers[], int low, int high, int searchNumber) {
    if (low > high) 
        return -1; // Base condition: element not found

    int mid = (low + high) / 2;

    if (numbers[mid] == searchNumber)
        return mid; // Found, return index
    else if (numbers[mid] > searchNumber) {
        high = mid - 1; // Update high for left search
        return binarySearch(numbers, low, high, searchNumber);
    } else {
        low = mid + 1; // Update low for right search
        return binarySearch(numbers, low, high, searchNumber);
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // Sorted array
    int size = 10;
    int searchNumber;

    printf("Enter a number to be searched: ");
    scanf("%d", &searchNumber);

    int result = binarySearch(numbers, 0, size - 1, searchNumber);

    if (result != -1)
        printf("%d is found in the list at index %d\n", searchNumber, result);
    else
        printf("%d is not found in the list\n", searchNumber);

    return 0;
}
