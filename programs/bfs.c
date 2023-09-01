#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Node {
    int dest;
    struct Node* next;
};

struct AdjList {
    struct Node* head;
};

struct Graph {
    int numVertices;
    struct AdjList* array;
};

struct Graph* createGraph(int numVertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = numVertices;
    graph->array = (struct AdjList*)malloc(numVertices * sizeof(struct AdjList));

    for (int i = 0; i < numVertices; ++i)
        graph->array[i].head = NULL;

    return graph;
}

void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = dest;
    newNode->next = graph->array[src].head;
    graph->array[src].head = newNode;

    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->dest = src;
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}

void bfs(struct Graph* graph, int startVertex) {
    int* visited = (int*)malloc(graph->numVertices * sizeof(int));
    for (int i = 0; i < graph->numVertices; ++i)
        visited[i] = 0;

    // Create a queue for BFS
    int* queue = (int*)malloc(graph->numVertices * sizeof(int));
    int front = 0, rear = 0;

    visited[startVertex] = 1;
    queue[rear++] = startVertex;

    while (front != rear) {
        int currentVertex = queue[front++];
        // printf("%d ", currentVertex);

        struct Node* temp = graph->array[currentVertex].head;
        while (temp) {
            int adjVertex = temp->dest;
            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
            }
            temp = temp->next;
        }
    }

    free(visited);
    free(queue);
}

int main() {
    srand(time(NULL));
    int numVertices = 512;
    struct Graph* graph = createGraph(numVertices);

    for (int i = 0; i < numVertices; ++i) {
        int numEdges = rand() % (numVertices - 1) + 1;
        for (int j = 0; j < numEdges; ++j) {
            int dest = rand() % numVertices;
            if (dest != i)
                addEdge(graph, i, dest);
        }
    }

    bfs(graph, 0);

    return 0;
}
