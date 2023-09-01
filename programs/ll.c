#include <stdlib.h>

struct Node {
    double data;
    struct Node *next;
};

double traverseLinkedList(struct Node *head) {
    struct Node *current = head;
    double sum = 0;

    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }

    return sum;
}

struct Node *reverseList(struct Node *head) {
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int main() {
    int ll_size = 300000;

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n = head;

    for (int i = 0; i < ll_size; i++) {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = i + 0.1234;
        n->next = node;
        n = node;
    }

    n->next = NULL;

    double sum = traverseLinkedList(head);

    head = reverseList(head);

    return 0;
}
