#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"

void init(struct DynamicArray *arr) {
  arr->size = 0;
  arr->capacity = 1;
  arr->data = (int*)malloc(sizeof(int) * arr->capacity);
}

void push_back(struct DynamicArray *arr, int value) {
  if(arr->size == arr->capacity) {
    arr->capacity *=2;
    int *new_data = (int*)malloc(sizeof(int) * arr->capacity);

    for(int i = 0; i < arr->size; i++) {
      new_data[i] = arr->data[i];
    }

    free(arr->data);
    arr->data = new_data;
  }

  arr->data[arr->size] = value;
  arr->size++;
}

int get(struct DynamicArray *arr, int index) {
    if (index < 0 || index >= arr->size) {
        printf("Index out of bounds\n");
        exit(1);
    }

    return arr->data[index];
}
