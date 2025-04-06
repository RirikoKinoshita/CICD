#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int* createArray(int size);

int main() {
    int* arr;
    int i;

    // Ensure memory allocation is successful
    arr = createArray(ARRAY_SIZE);  // Use a valid size instead of 0
    
    // Check for NULL pointer before accessing the array
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit program if allocation failed
    }

    // Properly initialize the array with values
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = i * 2;
    }

    // Print the array values
    printf("Array values: \n");
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory to avoid memory leak
    free(arr);

    return 0;
}

int* createArray(int size) {
    if (size <= 0) {
        return NULL;  // Return NULL if invalid size
    }
    int* arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);  // Forced exit on allocation failure
    }
    
    // Initialize array elements
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    
    return arr;
}
