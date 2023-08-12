#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct TreeNode {
    int value;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct Item {
    struct TreeNode *node;
    struct Item *next;
};

int TREE_DEPTH;
struct Item *head;
struct Item *tail;

int random_int() {
    return 1 + rand() % (9999 - 0 + 1);
}

struct TreeNode *createNode() {
    struct TreeNode *node = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    node->value = random_int();
    node->left = NULL;
    node->right = NULL;
    return node;
}

void enqueue(struct TreeNode *node) {
    struct Item *item = (struct Item *)malloc(sizeof(struct Item));
    item->node = node;

    if (head == NULL) {
        head = item;
        tail = item;
    } else {
        tail->next = item;
        tail = item;
    }
}

struct TreeNode *dequeue() {
    if (head == NULL) {
        printf("Queue is empty\n");
        return NULL;
    } else {
        struct Item *item = head;
        head = head->next;
        if (head == NULL) {
            tail = NULL;
        }
        struct TreeNode *node = item->node;
        free(item);
        return node;
    }
}

void generateTree(struct TreeNode *root, int level) {
    if (level < TREE_DEPTH) {
        root->left = createNode();
        root->right = createNode();
        level++;
        generateTree(root->left, level);
        generateTree(root->right, level);
    }
}

int main() {
    srand(time(0));

    // Tree
    TREE_DEPTH = 27;
    struct TreeNode *root = createNode();
    generateTree(root, 0);

    // Queue
    head = NULL;
    tail = NULL;
    enqueue(root);

    while (head != NULL) {
        struct TreeNode *node = dequeue();
        if (node->value == 99999) {
            printf("Value found: %p(%d)", node, node->value);
            return 0;
        }

        if (node->left != NULL) {
            enqueue(node->left);
        }

        if (node->right != NULL) {
            enqueue(node->right);
        }
    }

    return 0;
}
