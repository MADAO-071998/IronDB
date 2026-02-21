#include <stdio.h>
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

void push_back(struct LinkedList* list, int value) {
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = value;
    new_node->next = NULL;

    if (list->head == NULL) {
        list->head = new_node;
    } else {
        struct Node* current = list->head;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = new_node;
    }

    list->size++;
}

void print_list(struct LinkedList* list) {
    struct Node* current = list->head;

    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\n");
}