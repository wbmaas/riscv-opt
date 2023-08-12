#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int data;
    struct Node *next;
};

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
}

int traverseLinkedList(struct Node *head) {
    struct Node *current = head;
    int sum = 0;

    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }

    return sum;
}

int main() {
    srand(time(0));
    int input_size = 1000000;

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n = head;

    for (int i = 0; i < input_size; i++) {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = random_int();
        n->next = node;
        n = node;
    }

    n->next = NULL;

    int sum = traverseLinkedList(head);
    printf("%d ", sum);

    return 0;
}
