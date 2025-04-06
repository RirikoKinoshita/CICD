#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 5

int* createArray(int size);

int main() {
    int* arr;
    int i;
    
    arr = createArray(0);
    
    for (i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = i * 2;
    }

    arr[ARRAY_SIZE + 1] = 10;

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
    } else {
        printf("Array values: \n");
        for (i = 0; i < ARRAY_SIZE; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    return 0;
}

int* createArray(int size) {
    if (size <= 0) {
        return NULL;
    }
    int* arr = (int*)malloc(size * sizeof(int));
    
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    
    return arr;
}
