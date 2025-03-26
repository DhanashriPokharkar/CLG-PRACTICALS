//Write a C program that accepts the vertices and edges of a graph and stores it as an adjacency
//matrix. Display the adjacency matrix. Implement functions to print indegree of all vertices of graph. 

#include <stdio.h>

#define MAX 100

void displayMatrix(int matrix[MAX][MAX], int vertices) {
    printf("\nAdjacency Matrix:\n");
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void printIndegree(int matrix[MAX][MAX], int vertices) {
    printf("\nIndegree of vertices:\n");
    for (int j = 0; j < vertices; j++) {
        int indegree = 0;
        for (int i = 0; i < vertices; i++) {
            if (matrix[i][j] == 1) {
                indegree++;
            }
        }
        printf("Vertex %d: %d\n", j, indegree);
    }
}

int main() {
    int vertices, edges;
    int matrix[MAX][MAX] = {0}; 

    printf("Enter the number of vertices: ");
    scanf("%d", &vertices);
    printf("Enter the number of edges: ");
    scanf("%d", &edges);

    printf("Enter the edges (format: source destination):\n");
    for (int i = 0; i < edges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        matrix[src][dest] = 1;
    }

    displayMatrix(matrix, vertices);
    printIndegree(matrix, vertices);

    return 0;
}

