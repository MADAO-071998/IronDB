struct DynamicArray {
  int *data;
  int size;
  int capacity;
};

void init(struct DynamicArray *arr);

void push_back(struct DynamicArray *arr, int value);

int get(struct DynamicArray *arr, int index);

void free_array(struct DynamicArray *arr);