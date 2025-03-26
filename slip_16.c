//C program to implement graph traversal method using Breadth first search
#include <stdio.h>
#include <stdlib.h>

#define MAX 100  // Maximum number of vertices

int adj[MAX][MAX]; // Adjacency matrix representation
int visited[MAX];  // Visited array
int vertices;      // Number of vertices

void BFS(int start) {
    int queue[MAX], front = 0, rear = 0;
    
    printf("%d ", start);
    visited[start] = 1;
    queue[rear++] = start;
    
    while (front < rear) {
        int v = queue[front++];
        
        for (int i = 0; i < vertices; i++) {
            if (adj[v][i] == 1 && !visited[i]) {
                printf("%d ", i);
                visited[i] = 1;
                queue[rear++] = i;
            }
        }
    }
}

void addEdge(int u, int v) {
    adj[u][v] = 1;
    adj[v][u] = 1; // For an undirected graph
}

int main() {
    int edges, u, v, start;
    
    printf("Enter number of vertices: ");
    scanf("%d", &vertices);
    
    printf("Enter number of edges: ");
    scanf("%d", &edges);
    
    // Initialize adjacency matrix and visited array
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            adj[i][j] = 0;
        }
        visited[i] = 0;
    }
    
    printf("Enter edges (u v):\n");
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        addEdge(u, v);
    }
    
    printf("Enter starting vertex: ");
    scanf("%d", &start);
    
    printf("Breadth First Traversal: ");
    BFS(start);
    printf("\n");
    
    return 0;
}
