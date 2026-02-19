#include <stdlib.h>
#include "linked_list.h"

void init_list(struct LinkedList* list) {
    list->head = NULL;
    list->size = 0;
}

void push_front(struct LinkedList* list, int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));

    new_node->data = value;
    new_node->next = list->head;

    list->head = new_node;
    list->size++;
}
