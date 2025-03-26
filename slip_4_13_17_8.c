//Write a C program that accepts the vertices and edges of a graph and stores it as an adjacency
//matrix. Display the adjacency matrix.

#include <stdio.h>

void main(){
	int v;
	printf("Enter the number of vertices: ");
	scanf("%d", &v);
	
	int m[v][v], data;
	
	printf("Enter 1 if edge is present a 0 if not \n");
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			printf("Enter if edge is present between vertice %d -> %d: ", i, j);
			scanf("%d", &data);
			m[i][j]=data;
		}
	}
	
	printf("\nThe adjacency matrix is\n");
	for(int i=0;i<v;i++){
		for(int j=0;j<v;j++){
			printf("%d\t", m[i][j]);
		}
		printf("\n");
	}
}
