#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    double data;
    struct Node *next;
};

double rand_double() {
    double div = RAND_MAX / (9999 - (-9999));
    return -9999 + (rand() / div);
}

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
    srand(time(0));
    int ll_size = 10000;

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n = head;

    for (int i = 0; i < ll_size; i++) {
        struct Node *node = (struct Node *)malloc(sizeof(struct Node));
        node->data = rand_double();
        n->next = node;
        n = node;
    }

    n->next = NULL;

    double sum = traverseLinkedList(head);
    printf("LL sum: %f\n", sum);

    printf("LL head: %f\n", head->data);
    head = reverseList(head);
    printf("LL new head: %f\n", head->data);

    return 0;
}
