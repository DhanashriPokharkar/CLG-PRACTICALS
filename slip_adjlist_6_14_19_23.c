//adjacency list

#include <stdio.h>
#include <stdlib.h>
typedef struct Node{
    int data;
    struct Node *next;
} Node;
Node *createNode(int data){
    Node *nn = (Node *)malloc(sizeof(Node));
    nn->data = data;
    nn->next = NULL;
    return nn;
}
Node *printList(Node *root){
    Node *temp = root;
    while (temp){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("X\n");
}
void *addNode(Node *root, Node *next){
    Node *temp = root;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = next;
}
void main(){
    int n;
    printf("Enter no of vertice: ");
    scanf("%d", &n);
    int m[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &m[i][j]);
    Node *adjList[n];
    for (int i = 0; i < n; i++)
        adjList[i] = createNode(i);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (m[i][j] == 1)
            {
                Node *newNode = createNode(j);
                addNode(adjList[i], newNode);
            }
    for (int i = 0; i < n; i++)
        printList(adjList[i]);
}