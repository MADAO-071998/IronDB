#include <stdio.h>
#include <stdlib.h>
#include "dynamic_array.h"
#include "linked_list.h"

int main() {
    // struct DynamicArray arr;

    // init(&arr);

    // for (int i = 1; i <= 10; i++) {
    //     push_back(&arr, i);
    // }

    // // for (int i = 0; i < arr.size; i++) {
    // //     printf("%d ", arr.data[i]);
    // // }

    // for (int i = 0; i < arr.size; i++) {
    //     printf("%d ", get(&arr, i));
    // }

    // printf("\n");

    // free_array(&arr);  // free allocated memory

    struct LinkedList list;

    init_list(&list);

    push_front(&list, 2);
    push_front(&list, 1);

    push_back(&list, 3);
    push_back(&list, 4);

    print_list(&list);

    // struct Node* current = list.head;

    // while (current != NULL) {
    //     printf("%d ", current->data);
    //     current = current->next;
    // }

    // printf("\n");

    return 0;
}

// g++ main.cpp dynamic_array.cpp -o main
