struct Node {
    int data;
    struct Node* next;
};

struct LinkedList {
    struct Node* head;
    int size;
};

void init_list(struct LinkedList* list);

void push_front(struct LinkedList* list, int value);

void push_back(struct LinkedList* list, int value);

void print_list(struct LinkedList* list);