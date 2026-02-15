#include <stdlib.h>
#include "dynamic_array.h"

void init(struct DynamicArray *arr) {
  arr->size = 0;
  arr->capacity = 1;
  arr->data = (int*)malloc(sizeof(int) * arr->capacity);
}