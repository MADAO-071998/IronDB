#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

int main() {
    struct DynamicArray arr;

    init(&arr);

    for (int i = 1; i <= 10; i++) {
        push_back(&arr, i);
    }

    for (int i = 0; i < arr.size; i++) {
        printf("%d ", arr.data[i]);
    }

    printf("\n");

    free(arr.data);  // free allocated memory

    return 0;
}
